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

#include <tencentcloud/essbasic/v20201222/model/FaceIdPhoto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20201222::Model;
using namespace std;

FaceIdPhoto::FaceIdPhoto() :
    m_resultHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_photoHasBeenSet(false),
    m_orderNumberHasBeenSet(false)
{
}

CoreInternalOutcome FaceIdPhoto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceIdPhoto.Result` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_result = value["Result"].GetInt64();
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FaceIdPhoto.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Photo") && !value["Photo"].IsNull())
    {
        if (!value["Photo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FaceIdPhoto.Photo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_photo = string(value["Photo"].GetString());
        m_photoHasBeenSet = true;
    }

    if (value.HasMember("OrderNumber") && !value["OrderNumber"].IsNull())
    {
        if (!value["OrderNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FaceIdPhoto.OrderNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderNumber = string(value["OrderNumber"].GetString());
        m_orderNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FaceIdPhoto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_result, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_photoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Photo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_photo.c_str(), allocator).Move(), allocator);
    }

    if (m_orderNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderNumber.c_str(), allocator).Move(), allocator);
    }

}


int64_t FaceIdPhoto::GetResult() const
{
    return m_result;
}

void FaceIdPhoto::SetResult(const int64_t& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool FaceIdPhoto::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string FaceIdPhoto::GetDescription() const
{
    return m_description;
}

void FaceIdPhoto::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool FaceIdPhoto::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string FaceIdPhoto::GetPhoto() const
{
    return m_photo;
}

void FaceIdPhoto::SetPhoto(const string& _photo)
{
    m_photo = _photo;
    m_photoHasBeenSet = true;
}

bool FaceIdPhoto::PhotoHasBeenSet() const
{
    return m_photoHasBeenSet;
}

string FaceIdPhoto::GetOrderNumber() const
{
    return m_orderNumber;
}

void FaceIdPhoto::SetOrderNumber(const string& _orderNumber)
{
    m_orderNumber = _orderNumber;
    m_orderNumberHasBeenSet = true;
}

bool FaceIdPhoto::OrderNumberHasBeenSet() const
{
    return m_orderNumberHasBeenSet;
}

