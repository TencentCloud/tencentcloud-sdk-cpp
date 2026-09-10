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

#include <tencentcloud/adp/v20260520/model/AccessKeyPassThroughConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AccessKeyPassThroughConfig::AccessKeyPassThroughConfig() :
    m_keyLocationHasBeenSet(false)
{
}

CoreInternalOutcome AccessKeyPassThroughConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KeyLocation") && !value["KeyLocation"].IsNull())
    {
        if (!value["KeyLocation"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyPassThroughConfig.KeyLocation` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_keyLocation = value["KeyLocation"].GetInt64();
        m_keyLocationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccessKeyPassThroughConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyLocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_keyLocation, allocator);
    }

}


int64_t AccessKeyPassThroughConfig::GetKeyLocation() const
{
    return m_keyLocation;
}

void AccessKeyPassThroughConfig::SetKeyLocation(const int64_t& _keyLocation)
{
    m_keyLocation = _keyLocation;
    m_keyLocationHasBeenSet = true;
}

bool AccessKeyPassThroughConfig::KeyLocationHasBeenSet() const
{
    return m_keyLocationHasBeenSet;
}

