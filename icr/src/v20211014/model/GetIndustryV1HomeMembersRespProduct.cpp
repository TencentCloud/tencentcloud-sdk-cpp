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

#include <tencentcloud/icr/v20211014/model/GetIndustryV1HomeMembersRespProduct.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Icr::V20211014::Model;
using namespace std;

GetIndustryV1HomeMembersRespProduct::GetIndustryV1HomeMembersRespProduct() :
    m_createTimeHasBeenSet(false),
    m_editTimeHasBeenSet(false),
    m_appKeyHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_industryHasBeenSet(false),
    m_operatorListHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_templateListHasBeenSet(false)
{
}

CoreInternalOutcome GetIndustryV1HomeMembersRespProduct::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetIndustryV1HomeMembersRespProduct.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("EditTime") && !value["EditTime"].IsNull())
    {
        if (!value["EditTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetIndustryV1HomeMembersRespProduct.EditTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_editTime = string(value["EditTime"].GetString());
        m_editTimeHasBeenSet = true;
    }

    if (value.HasMember("AppKey") && !value["AppKey"].IsNull())
    {
        if (!value["AppKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetIndustryV1HomeMembersRespProduct.AppKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appKey = string(value["AppKey"].GetString());
        m_appKeyHasBeenSet = true;
    }

    if (value.HasMember("Image") && !value["Image"].IsNull())
    {
        if (!value["Image"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetIndustryV1HomeMembersRespProduct.Image` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_image = string(value["Image"].GetString());
        m_imageHasBeenSet = true;
    }

    if (value.HasMember("Industry") && !value["Industry"].IsNull())
    {
        if (!value["Industry"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GetIndustryV1HomeMembersRespProduct.Industry` is not array type"));

        const rapidjson::Value &tmpValue = value["Industry"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GetIndustryV1HomeMembersRespIndustry item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_industry.push_back(item);
        }
        m_industryHasBeenSet = true;
    }

    if (value.HasMember("OperatorList") && !value["OperatorList"].IsNull())
    {
        if (!value["OperatorList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetIndustryV1HomeMembersRespProduct.OperatorList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatorList = string(value["OperatorList"].GetString());
        m_operatorListHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetIndustryV1HomeMembersRespProduct.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetIndustryV1HomeMembersRespProduct.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("TemplateList") && !value["TemplateList"].IsNull())
    {
        if (!value["TemplateList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetIndustryV1HomeMembersRespProduct.TemplateList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateList = string(value["TemplateList"].GetString());
        m_templateListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GetIndustryV1HomeMembersRespProduct::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_editTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EditTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_editTime.c_str(), allocator).Move(), allocator);
    }

    if (m_appKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appKey.c_str(), allocator).Move(), allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_industryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Industry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_industry.begin(); itr != m_industry.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_operatorListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operatorList.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_templateListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateList.c_str(), allocator).Move(), allocator);
    }

}


string GetIndustryV1HomeMembersRespProduct::GetCreateTime() const
{
    return m_createTime;
}

void GetIndustryV1HomeMembersRespProduct::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool GetIndustryV1HomeMembersRespProduct::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string GetIndustryV1HomeMembersRespProduct::GetEditTime() const
{
    return m_editTime;
}

void GetIndustryV1HomeMembersRespProduct::SetEditTime(const string& _editTime)
{
    m_editTime = _editTime;
    m_editTimeHasBeenSet = true;
}

bool GetIndustryV1HomeMembersRespProduct::EditTimeHasBeenSet() const
{
    return m_editTimeHasBeenSet;
}

string GetIndustryV1HomeMembersRespProduct::GetAppKey() const
{
    return m_appKey;
}

void GetIndustryV1HomeMembersRespProduct::SetAppKey(const string& _appKey)
{
    m_appKey = _appKey;
    m_appKeyHasBeenSet = true;
}

bool GetIndustryV1HomeMembersRespProduct::AppKeyHasBeenSet() const
{
    return m_appKeyHasBeenSet;
}

string GetIndustryV1HomeMembersRespProduct::GetImage() const
{
    return m_image;
}

void GetIndustryV1HomeMembersRespProduct::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool GetIndustryV1HomeMembersRespProduct::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

vector<GetIndustryV1HomeMembersRespIndustry> GetIndustryV1HomeMembersRespProduct::GetIndustry() const
{
    return m_industry;
}

void GetIndustryV1HomeMembersRespProduct::SetIndustry(const vector<GetIndustryV1HomeMembersRespIndustry>& _industry)
{
    m_industry = _industry;
    m_industryHasBeenSet = true;
}

bool GetIndustryV1HomeMembersRespProduct::IndustryHasBeenSet() const
{
    return m_industryHasBeenSet;
}

string GetIndustryV1HomeMembersRespProduct::GetOperatorList() const
{
    return m_operatorList;
}

void GetIndustryV1HomeMembersRespProduct::SetOperatorList(const string& _operatorList)
{
    m_operatorList = _operatorList;
    m_operatorListHasBeenSet = true;
}

bool GetIndustryV1HomeMembersRespProduct::OperatorListHasBeenSet() const
{
    return m_operatorListHasBeenSet;
}

string GetIndustryV1HomeMembersRespProduct::GetProductName() const
{
    return m_productName;
}

void GetIndustryV1HomeMembersRespProduct::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool GetIndustryV1HomeMembersRespProduct::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string GetIndustryV1HomeMembersRespProduct::GetRemark() const
{
    return m_remark;
}

void GetIndustryV1HomeMembersRespProduct::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool GetIndustryV1HomeMembersRespProduct::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string GetIndustryV1HomeMembersRespProduct::GetTemplateList() const
{
    return m_templateList;
}

void GetIndustryV1HomeMembersRespProduct::SetTemplateList(const string& _templateList)
{
    m_templateList = _templateList;
    m_templateListHasBeenSet = true;
}

bool GetIndustryV1HomeMembersRespProduct::TemplateListHasBeenSet() const
{
    return m_templateListHasBeenSet;
}

