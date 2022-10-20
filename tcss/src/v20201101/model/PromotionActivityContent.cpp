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

#include <tencentcloud/tcss/v20201101/model/PromotionActivityContent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

PromotionActivityContent::PromotionActivityContent() :
    m_monthNumHasBeenSet(false),
    m_coresCountLimitHasBeenSet(false),
    m_professionalDiscountHasBeenSet(false),
    m_imageAuthorizationNumHasBeenSet(false)
{
}

CoreInternalOutcome PromotionActivityContent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MonthNum") && !value["MonthNum"].IsNull())
    {
        if (!value["MonthNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PromotionActivityContent.MonthNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_monthNum = value["MonthNum"].GetUint64();
        m_monthNumHasBeenSet = true;
    }

    if (value.HasMember("CoresCountLimit") && !value["CoresCountLimit"].IsNull())
    {
        if (!value["CoresCountLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PromotionActivityContent.CoresCountLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_coresCountLimit = value["CoresCountLimit"].GetUint64();
        m_coresCountLimitHasBeenSet = true;
    }

    if (value.HasMember("ProfessionalDiscount") && !value["ProfessionalDiscount"].IsNull())
    {
        if (!value["ProfessionalDiscount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PromotionActivityContent.ProfessionalDiscount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_professionalDiscount = value["ProfessionalDiscount"].GetUint64();
        m_professionalDiscountHasBeenSet = true;
    }

    if (value.HasMember("ImageAuthorizationNum") && !value["ImageAuthorizationNum"].IsNull())
    {
        if (!value["ImageAuthorizationNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PromotionActivityContent.ImageAuthorizationNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageAuthorizationNum = value["ImageAuthorizationNum"].GetUint64();
        m_imageAuthorizationNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PromotionActivityContent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_monthNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonthNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monthNum, allocator);
    }

    if (m_coresCountLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoresCountLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_coresCountLimit, allocator);
    }

    if (m_professionalDiscountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProfessionalDiscount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_professionalDiscount, allocator);
    }

    if (m_imageAuthorizationNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageAuthorizationNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageAuthorizationNum, allocator);
    }

}


uint64_t PromotionActivityContent::GetMonthNum() const
{
    return m_monthNum;
}

void PromotionActivityContent::SetMonthNum(const uint64_t& _monthNum)
{
    m_monthNum = _monthNum;
    m_monthNumHasBeenSet = true;
}

bool PromotionActivityContent::MonthNumHasBeenSet() const
{
    return m_monthNumHasBeenSet;
}

uint64_t PromotionActivityContent::GetCoresCountLimit() const
{
    return m_coresCountLimit;
}

void PromotionActivityContent::SetCoresCountLimit(const uint64_t& _coresCountLimit)
{
    m_coresCountLimit = _coresCountLimit;
    m_coresCountLimitHasBeenSet = true;
}

bool PromotionActivityContent::CoresCountLimitHasBeenSet() const
{
    return m_coresCountLimitHasBeenSet;
}

uint64_t PromotionActivityContent::GetProfessionalDiscount() const
{
    return m_professionalDiscount;
}

void PromotionActivityContent::SetProfessionalDiscount(const uint64_t& _professionalDiscount)
{
    m_professionalDiscount = _professionalDiscount;
    m_professionalDiscountHasBeenSet = true;
}

bool PromotionActivityContent::ProfessionalDiscountHasBeenSet() const
{
    return m_professionalDiscountHasBeenSet;
}

uint64_t PromotionActivityContent::GetImageAuthorizationNum() const
{
    return m_imageAuthorizationNum;
}

void PromotionActivityContent::SetImageAuthorizationNum(const uint64_t& _imageAuthorizationNum)
{
    m_imageAuthorizationNum = _imageAuthorizationNum;
    m_imageAuthorizationNumHasBeenSet = true;
}

bool PromotionActivityContent::ImageAuthorizationNumHasBeenSet() const
{
    return m_imageAuthorizationNumHasBeenSet;
}

