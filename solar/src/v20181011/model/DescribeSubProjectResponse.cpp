/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/solar/v20181011/model/DescribeSubProjectResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Solar::V20181011::Model;
using namespace rapidjson;
using namespace std;

DescribeSubProjectResponse::DescribeSubProjectResponse() :
    m_productInfoHasBeenSet(false),
    m_activityInfoHasBeenSet(false),
    m_shareTitleHasBeenSet(false),
    m_shareDescHasBeenSet(false),
    m_shareImgHasBeenSet(false),
    m_hasStrategyHasBeenSet(false),
    m_subProjectStatusHasBeenSet(false),
    m_shareAppIdHasBeenSet(false),
    m_shareWsIdHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSubProjectResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("ProductInfo") && !rsp["ProductInfo"].IsNull())
    {
        if (!rsp["ProductInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ProductInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_productInfo.Deserialize(rsp["ProductInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_productInfoHasBeenSet = true;
    }

    if (rsp.HasMember("ActivityInfo") && !rsp["ActivityInfo"].IsNull())
    {
        if (!rsp["ActivityInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ActivityInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_activityInfo.Deserialize(rsp["ActivityInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_activityInfoHasBeenSet = true;
    }

    if (rsp.HasMember("ShareTitle") && !rsp["ShareTitle"].IsNull())
    {
        if (!rsp["ShareTitle"].IsString())
        {
            return CoreInternalOutcome(Error("response `ShareTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shareTitle = string(rsp["ShareTitle"].GetString());
        m_shareTitleHasBeenSet = true;
    }

    if (rsp.HasMember("ShareDesc") && !rsp["ShareDesc"].IsNull())
    {
        if (!rsp["ShareDesc"].IsString())
        {
            return CoreInternalOutcome(Error("response `ShareDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shareDesc = string(rsp["ShareDesc"].GetString());
        m_shareDescHasBeenSet = true;
    }

    if (rsp.HasMember("ShareImg") && !rsp["ShareImg"].IsNull())
    {
        if (!rsp["ShareImg"].IsString())
        {
            return CoreInternalOutcome(Error("response `ShareImg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shareImg = string(rsp["ShareImg"].GetString());
        m_shareImgHasBeenSet = true;
    }

    if (rsp.HasMember("HasStrategy") && !rsp["HasStrategy"].IsNull())
    {
        if (!rsp["HasStrategy"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `HasStrategy` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hasStrategy = rsp["HasStrategy"].GetUint64();
        m_hasStrategyHasBeenSet = true;
    }

    if (rsp.HasMember("SubProjectStatus") && !rsp["SubProjectStatus"].IsNull())
    {
        if (!rsp["SubProjectStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubProjectStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subProjectStatus = string(rsp["SubProjectStatus"].GetString());
        m_subProjectStatusHasBeenSet = true;
    }

    if (rsp.HasMember("ShareAppId") && !rsp["ShareAppId"].IsNull())
    {
        if (!rsp["ShareAppId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ShareAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shareAppId = string(rsp["ShareAppId"].GetString());
        m_shareAppIdHasBeenSet = true;
    }

    if (rsp.HasMember("ShareWsId") && !rsp["ShareWsId"].IsNull())
    {
        if (!rsp["ShareWsId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ShareWsId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shareWsId = string(rsp["ShareWsId"].GetString());
        m_shareWsIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


ProductInfo DescribeSubProjectResponse::GetProductInfo() const
{
    return m_productInfo;
}

bool DescribeSubProjectResponse::ProductInfoHasBeenSet() const
{
    return m_productInfoHasBeenSet;
}

ActivityInfo DescribeSubProjectResponse::GetActivityInfo() const
{
    return m_activityInfo;
}

bool DescribeSubProjectResponse::ActivityInfoHasBeenSet() const
{
    return m_activityInfoHasBeenSet;
}

string DescribeSubProjectResponse::GetShareTitle() const
{
    return m_shareTitle;
}

bool DescribeSubProjectResponse::ShareTitleHasBeenSet() const
{
    return m_shareTitleHasBeenSet;
}

string DescribeSubProjectResponse::GetShareDesc() const
{
    return m_shareDesc;
}

bool DescribeSubProjectResponse::ShareDescHasBeenSet() const
{
    return m_shareDescHasBeenSet;
}

string DescribeSubProjectResponse::GetShareImg() const
{
    return m_shareImg;
}

bool DescribeSubProjectResponse::ShareImgHasBeenSet() const
{
    return m_shareImgHasBeenSet;
}

uint64_t DescribeSubProjectResponse::GetHasStrategy() const
{
    return m_hasStrategy;
}

bool DescribeSubProjectResponse::HasStrategyHasBeenSet() const
{
    return m_hasStrategyHasBeenSet;
}

string DescribeSubProjectResponse::GetSubProjectStatus() const
{
    return m_subProjectStatus;
}

bool DescribeSubProjectResponse::SubProjectStatusHasBeenSet() const
{
    return m_subProjectStatusHasBeenSet;
}

string DescribeSubProjectResponse::GetShareAppId() const
{
    return m_shareAppId;
}

bool DescribeSubProjectResponse::ShareAppIdHasBeenSet() const
{
    return m_shareAppIdHasBeenSet;
}

string DescribeSubProjectResponse::GetShareWsId() const
{
    return m_shareWsId;
}

bool DescribeSubProjectResponse::ShareWsIdHasBeenSet() const
{
    return m_shareWsIdHasBeenSet;
}


