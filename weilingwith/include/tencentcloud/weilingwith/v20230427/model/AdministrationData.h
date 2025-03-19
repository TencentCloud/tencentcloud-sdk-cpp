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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ADMINISTRATIONDATA_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ADMINISTRATIONDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 行政区划数据结构
                */
                class AdministrationData : public AbstractModel
                {
                public:
                    AdministrationData();
                    ~AdministrationData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取行政区划编码
                     * @return AdministrationCode 行政区划编码
                     * 
                     */
                    std::string GetAdministrationCode() const;

                    /**
                     * 设置行政区划编码
                     * @param _administrationCode 行政区划编码
                     * 
                     */
                    void SetAdministrationCode(const std::string& _administrationCode);

                    /**
                     * 判断参数 AdministrationCode 是否已赋值
                     * @return AdministrationCode 是否已赋值
                     * 
                     */
                    bool AdministrationCodeHasBeenSet() const;

                    /**
                     * 获取行政区划名称
                     * @return AdministrationName 行政区划名称
                     * 
                     */
                    std::string GetAdministrationName() const;

                    /**
                     * 设置行政区划名称
                     * @param _administrationName 行政区划名称
                     * 
                     */
                    void SetAdministrationName(const std::string& _administrationName);

                    /**
                     * 判断参数 AdministrationName 是否已赋值
                     * @return AdministrationName 是否已赋值
                     * 
                     */
                    bool AdministrationNameHasBeenSet() const;

                private:

                    /**
                     * 行政区划编码
                     */
                    std::string m_administrationCode;
                    bool m_administrationCodeHasBeenSet;

                    /**
                     * 行政区划名称
                     */
                    std::string m_administrationName;
                    bool m_administrationNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ADMINISTRATIONDATA_H_
