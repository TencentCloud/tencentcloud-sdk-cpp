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

#include <tencentcloud/ivld/v20210903/model/CustomPersonInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

CustomPersonInfo::CustomPersonInfo() :
    m_personIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_basicInfoHasBeenSet(false),
    m_l1CategoryHasBeenSet(false),
    m_l2CategoryHasBeenSet(false),
    m_imageInfoSetHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome CustomPersonInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PersonId") && !value["PersonId"].IsNull())
    {
        if (!value["PersonId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomPersonInfo.PersonId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personId = string(value["PersonId"].GetString());
        m_personIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomPersonInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("BasicInfo") && !value["BasicInfo"].IsNull())
    {
        if (!value["BasicInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomPersonInfo.BasicInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_basicInfo = string(value["BasicInfo"].GetString());
        m_basicInfoHasBeenSet = true;
    }

    if (value.HasMember("L1Category") && !value["L1Category"].IsNull())
    {
        if (!value["L1Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomPersonInfo.L1Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_l1Category = string(value["L1Category"].GetString());
        m_l1CategoryHasBeenSet = true;
    }

    if (value.HasMember("L2Category") && !value["L2Category"].IsNull())
    {
        if (!value["L2Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomPersonInfo.L2Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_l2Category = string(value["L2Category"].GetString());
        m_l2CategoryHasBeenSet = true;
    }

    if (value.HasMember("ImageInfoSet") && !value["ImageInfoSet"].IsNull())
    {
        if (!value["ImageInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomPersonInfo.ImageInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ImageInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PersonImageInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_imageInfoSet.push_back(item);
        }
        m_imageInfoSetHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomPersonInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomPersonInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_personIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_personId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_basicInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_basicInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_l1CategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "L1Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_l1Category.c_str(), allocator).Move(), allocator);
    }

    if (m_l2CategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "L2Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_l2Category.c_str(), allocator).Move(), allocator);
    }

    if (m_imageInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_imageInfoSet.begin(); itr != m_imageInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string CustomPersonInfo::GetPersonId() const
{
    return m_personId;
}

void CustomPersonInfo::SetPersonId(const string& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool CustomPersonInfo::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

string CustomPersonInfo::GetName() const
{
    return m_name;
}

void CustomPersonInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CustomPersonInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CustomPersonInfo::GetBasicInfo() const
{
    return m_basicInfo;
}

void CustomPersonInfo::SetBasicInfo(const string& _basicInfo)
{
    m_basicInfo = _basicInfo;
    m_basicInfoHasBeenSet = true;
}

bool CustomPersonInfo::BasicInfoHasBeenSet() const
{
    return m_basicInfoHasBeenSet;
}

string CustomPersonInfo::GetL1Category() const
{
    return m_l1Category;
}

void CustomPersonInfo::SetL1Category(const string& _l1Category)
{
    m_l1Category = _l1Category;
    m_l1CategoryHasBeenSet = true;
}

bool CustomPersonInfo::L1CategoryHasBeenSet() const
{
    return m_l1CategoryHasBeenSet;
}

string CustomPersonInfo::GetL2Category() const
{
    return m_l2Category;
}

void CustomPersonInfo::SetL2Category(const string& _l2Category)
{
    m_l2Category = _l2Category;
    m_l2CategoryHasBeenSet = true;
}

bool CustomPersonInfo::L2CategoryHasBeenSet() const
{
    return m_l2CategoryHasBeenSet;
}

vector<PersonImageInfo> CustomPersonInfo::GetImageInfoSet() const
{
    return m_imageInfoSet;
}

void CustomPersonInfo::SetImageInfoSet(const vector<PersonImageInfo>& _imageInfoSet)
{
    m_imageInfoSet = _imageInfoSet;
    m_imageInfoSetHasBeenSet = true;
}

bool CustomPersonInfo::ImageInfoSetHasBeenSet() const
{
    return m_imageInfoSetHasBeenSet;
}

string CustomPersonInfo::GetCreateTime() const
{
    return m_createTime;
}

void CustomPersonInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CustomPersonInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

