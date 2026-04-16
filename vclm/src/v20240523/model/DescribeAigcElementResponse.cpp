/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/vclm/v20240523/model/DescribeAigcElementResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vclm::V20240523::Model;
using namespace std;

DescribeAigcElementResponse::DescribeAigcElementResponse() :
    m_nameHasBeenSet(false),
    m_elementIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_referenceTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_elementImageListHasBeenSet(false),
    m_videoListHasBeenSet(false),
    m_tagListHasBeenSet(false),
    m_providerDetailsHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAigcElementResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("ElementId") && !rsp["ElementId"].IsNull())
    {
        if (!rsp["ElementId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElementId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_elementId = string(rsp["ElementId"].GetString());
        m_elementIdHasBeenSet = true;
    }

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (rsp.HasMember("ReferenceType") && !rsp["ReferenceType"].IsNull())
    {
        if (!rsp["ReferenceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReferenceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_referenceType = string(rsp["ReferenceType"].GetString());
        m_referenceTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Provider") && !rsp["Provider"].IsNull())
    {
        if (!rsp["Provider"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Provider` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Provider"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_provider.push_back((*itr).GetString());
        }
        m_providerHasBeenSet = true;
    }

    if (rsp.HasMember("ElementImageList") && !rsp["ElementImageList"].IsNull())
    {
        if (!rsp["ElementImageList"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ElementImageList` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_elementImageList.Deserialize(rsp["ElementImageList"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_elementImageListHasBeenSet = true;
    }

    if (rsp.HasMember("VideoList") && !rsp["VideoList"].IsNull())
    {
        if (!rsp["VideoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VideoList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["VideoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_videoList.push_back((*itr).GetString());
        }
        m_videoListHasBeenSet = true;
    }

    if (rsp.HasMember("TagList") && !rsp["TagList"].IsNull())
    {
        if (!rsp["TagList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TagList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TagList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagList item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagList.push_back(item);
        }
        m_tagListHasBeenSet = true;
    }

    if (rsp.HasMember("ProviderDetails") && !rsp["ProviderDetails"].IsNull())
    {
        if (!rsp["ProviderDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProviderDetails` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ProviderDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProviderDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_providerDetails.push_back(item);
        }
        m_providerDetailsHasBeenSet = true;
    }

    if (rsp.HasMember("CreatedAt") && !rsp["CreatedAt"].IsNull())
    {
        if (!rsp["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(rsp["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (rsp.HasMember("UpdatedAt") && !rsp["UpdatedAt"].IsNull())
    {
        if (!rsp["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(rsp["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAigcElementResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_elementIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElementId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_elementId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_referenceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferenceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_referenceType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_providerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Provider";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_provider.begin(); itr != m_provider.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_elementImageListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElementImageList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_elementImageList.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_videoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_videoList.begin(); itr != m_videoList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagList.begin(); itr != m_tagList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_providerDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProviderDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_providerDetails.begin(); itr != m_providerDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeAigcElementResponse::GetName() const
{
    return m_name;
}

bool DescribeAigcElementResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeAigcElementResponse::GetElementId() const
{
    return m_elementId;
}

bool DescribeAigcElementResponse::ElementIdHasBeenSet() const
{
    return m_elementIdHasBeenSet;
}

string DescribeAigcElementResponse::GetDescription() const
{
    return m_description;
}

bool DescribeAigcElementResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DescribeAigcElementResponse::GetReferenceType() const
{
    return m_referenceType;
}

bool DescribeAigcElementResponse::ReferenceTypeHasBeenSet() const
{
    return m_referenceTypeHasBeenSet;
}

string DescribeAigcElementResponse::GetStatus() const
{
    return m_status;
}

bool DescribeAigcElementResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> DescribeAigcElementResponse::GetProvider() const
{
    return m_provider;
}

bool DescribeAigcElementResponse::ProviderHasBeenSet() const
{
    return m_providerHasBeenSet;
}

ElementImageList DescribeAigcElementResponse::GetElementImageList() const
{
    return m_elementImageList;
}

bool DescribeAigcElementResponse::ElementImageListHasBeenSet() const
{
    return m_elementImageListHasBeenSet;
}

vector<string> DescribeAigcElementResponse::GetVideoList() const
{
    return m_videoList;
}

bool DescribeAigcElementResponse::VideoListHasBeenSet() const
{
    return m_videoListHasBeenSet;
}

vector<TagList> DescribeAigcElementResponse::GetTagList() const
{
    return m_tagList;
}

bool DescribeAigcElementResponse::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}

vector<ProviderDetail> DescribeAigcElementResponse::GetProviderDetails() const
{
    return m_providerDetails;
}

bool DescribeAigcElementResponse::ProviderDetailsHasBeenSet() const
{
    return m_providerDetailsHasBeenSet;
}

string DescribeAigcElementResponse::GetCreatedAt() const
{
    return m_createdAt;
}

bool DescribeAigcElementResponse::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string DescribeAigcElementResponse::GetUpdatedAt() const
{
    return m_updatedAt;
}

bool DescribeAigcElementResponse::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}


