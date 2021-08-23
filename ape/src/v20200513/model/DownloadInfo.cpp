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

#include <tencentcloud/ape/v20200513/model/DownloadInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ape::V20200513::Model;
using namespace std;

DownloadInfo::DownloadInfo() :
    m_imageInfoHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_imageThumbUrlHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_orderCreateTimeHasBeenSet(false),
    m_downloadIdHasBeenSet(false),
    m_downloadTimeHasBeenSet(false),
    m_consumeTypeHasBeenSet(false),
    m_firstDownloadHasBeenSet(false)
{
}

CoreInternalOutcome DownloadInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageInfo") && !value["ImageInfo"].IsNull())
    {
        if (!value["ImageInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DownloadInfo.ImageInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageInfo.Deserialize(value["ImageInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageInfoHasBeenSet = true;
    }

    if (value.HasMember("ImageUrl") && !value["ImageUrl"].IsNull())
    {
        if (!value["ImageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DownloadInfo.ImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageUrl = string(value["ImageUrl"].GetString());
        m_imageUrlHasBeenSet = true;
    }

    if (value.HasMember("ImageThumbUrl") && !value["ImageThumbUrl"].IsNull())
    {
        if (!value["ImageThumbUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DownloadInfo.ImageThumbUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageThumbUrl = string(value["ImageThumbUrl"].GetString());
        m_imageThumbUrlHasBeenSet = true;
    }

    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DownloadInfo.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("OrderCreateTime") && !value["OrderCreateTime"].IsNull())
    {
        if (!value["OrderCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DownloadInfo.OrderCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderCreateTime = string(value["OrderCreateTime"].GetString());
        m_orderCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("DownloadId") && !value["DownloadId"].IsNull())
    {
        if (!value["DownloadId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DownloadInfo.DownloadId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downloadId = string(value["DownloadId"].GetString());
        m_downloadIdHasBeenSet = true;
    }

    if (value.HasMember("DownloadTime") && !value["DownloadTime"].IsNull())
    {
        if (!value["DownloadTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DownloadInfo.DownloadTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downloadTime = string(value["DownloadTime"].GetString());
        m_downloadTimeHasBeenSet = true;
    }

    if (value.HasMember("ConsumeType") && !value["ConsumeType"].IsNull())
    {
        if (!value["ConsumeType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DownloadInfo.ConsumeType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_consumeType = value["ConsumeType"].GetInt64();
        m_consumeTypeHasBeenSet = true;
    }

    if (value.HasMember("FirstDownload") && !value["FirstDownload"].IsNull())
    {
        if (!value["FirstDownload"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DownloadInfo.FirstDownload` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_firstDownload = value["FirstDownload"].GetBool();
        m_firstDownloadHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DownloadInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_imageThumbUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageThumbUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageThumbUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_orderCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_downloadIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_downloadId.c_str(), allocator).Move(), allocator);
    }

    if (m_downloadTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_downloadTime.c_str(), allocator).Move(), allocator);
    }

    if (m_consumeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumeType, allocator);
    }

    if (m_firstDownloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstDownload";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_firstDownload, allocator);
    }

}


ImageInfo DownloadInfo::GetImageInfo() const
{
    return m_imageInfo;
}

void DownloadInfo::SetImageInfo(const ImageInfo& _imageInfo)
{
    m_imageInfo = _imageInfo;
    m_imageInfoHasBeenSet = true;
}

bool DownloadInfo::ImageInfoHasBeenSet() const
{
    return m_imageInfoHasBeenSet;
}

string DownloadInfo::GetImageUrl() const
{
    return m_imageUrl;
}

void DownloadInfo::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool DownloadInfo::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string DownloadInfo::GetImageThumbUrl() const
{
    return m_imageThumbUrl;
}

void DownloadInfo::SetImageThumbUrl(const string& _imageThumbUrl)
{
    m_imageThumbUrl = _imageThumbUrl;
    m_imageThumbUrlHasBeenSet = true;
}

bool DownloadInfo::ImageThumbUrlHasBeenSet() const
{
    return m_imageThumbUrlHasBeenSet;
}

string DownloadInfo::GetOrderId() const
{
    return m_orderId;
}

void DownloadInfo::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool DownloadInfo::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string DownloadInfo::GetOrderCreateTime() const
{
    return m_orderCreateTime;
}

void DownloadInfo::SetOrderCreateTime(const string& _orderCreateTime)
{
    m_orderCreateTime = _orderCreateTime;
    m_orderCreateTimeHasBeenSet = true;
}

bool DownloadInfo::OrderCreateTimeHasBeenSet() const
{
    return m_orderCreateTimeHasBeenSet;
}

string DownloadInfo::GetDownloadId() const
{
    return m_downloadId;
}

void DownloadInfo::SetDownloadId(const string& _downloadId)
{
    m_downloadId = _downloadId;
    m_downloadIdHasBeenSet = true;
}

bool DownloadInfo::DownloadIdHasBeenSet() const
{
    return m_downloadIdHasBeenSet;
}

string DownloadInfo::GetDownloadTime() const
{
    return m_downloadTime;
}

void DownloadInfo::SetDownloadTime(const string& _downloadTime)
{
    m_downloadTime = _downloadTime;
    m_downloadTimeHasBeenSet = true;
}

bool DownloadInfo::DownloadTimeHasBeenSet() const
{
    return m_downloadTimeHasBeenSet;
}

int64_t DownloadInfo::GetConsumeType() const
{
    return m_consumeType;
}

void DownloadInfo::SetConsumeType(const int64_t& _consumeType)
{
    m_consumeType = _consumeType;
    m_consumeTypeHasBeenSet = true;
}

bool DownloadInfo::ConsumeTypeHasBeenSet() const
{
    return m_consumeTypeHasBeenSet;
}

bool DownloadInfo::GetFirstDownload() const
{
    return m_firstDownload;
}

void DownloadInfo::SetFirstDownload(const bool& _firstDownload)
{
    m_firstDownload = _firstDownload;
    m_firstDownloadHasBeenSet = true;
}

bool DownloadInfo::FirstDownloadHasBeenSet() const
{
    return m_firstDownloadHasBeenSet;
}

