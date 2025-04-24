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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_DISTINCTORNETSERVICEINFO_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_DISTINCTORNETSERVICEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * 省份(国际)或运营商基本信息
                */
                class DistinctOrNetServiceInfo : public AbstractModel
                {
                public:
                    DistinctOrNetServiceInfo();
                    ~DistinctOrNetServiceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取省份(国际)或运营商ID
                     * @return ID 省份(国际)或运营商ID
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置省份(国际)或运营商ID
                     * @param _iD 省份(国际)或运营商ID
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 省份(国际)或运营商ID
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_DISTINCTORNETSERVICEINFO_H_
