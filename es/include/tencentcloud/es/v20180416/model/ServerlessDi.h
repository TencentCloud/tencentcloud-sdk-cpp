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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_SERVERLESSDI_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_SERVERLESSDI_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/DiSourceCvm.h>
#include <tencentcloud/es/v20180416/model/DiSourceTke.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 创建serverless索引时创建数据接入
                */
                class ServerlessDi : public AbstractModel
                {
                public:
                    ServerlessDi();
                    ~ServerlessDi() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据链路采集源类型，如cvm_collector、tke_collector
                     * @return DiSourceType 数据链路采集源类型，如cvm_collector、tke_collector
                     * 
                     */
                    std::string GetDiSourceType() const;

                    /**
                     * 设置数据链路采集源类型，如cvm_collector、tke_collector
                     * @param _diSourceType 数据链路采集源类型，如cvm_collector、tke_collector
                     * 
                     */
                    void SetDiSourceType(const std::string& _diSourceType);

                    /**
                     * 判断参数 DiSourceType 是否已赋值
                     * @return DiSourceType 是否已赋值
                     * 
                     */
                    bool DiSourceTypeHasBeenSet() const;

                    /**
                     * 获取cvm数据源
                     * @return DiSourceCvm cvm数据源
                     * 
                     */
                    DiSourceCvm GetDiSourceCvm() const;

                    /**
                     * 设置cvm数据源
                     * @param _diSourceCvm cvm数据源
                     * 
                     */
                    void SetDiSourceCvm(const DiSourceCvm& _diSourceCvm);

                    /**
                     * 判断参数 DiSourceCvm 是否已赋值
                     * @return DiSourceCvm 是否已赋值
                     * 
                     */
                    bool DiSourceCvmHasBeenSet() const;

                    /**
                     * 获取tke数据源
                     * @return DiSourceTke tke数据源
                     * 
                     */
                    DiSourceTke GetDiSourceTke() const;

                    /**
                     * 设置tke数据源
                     * @param _diSourceTke tke数据源
                     * 
                     */
                    void SetDiSourceTke(const DiSourceTke& _diSourceTke);

                    /**
                     * 判断参数 DiSourceTke 是否已赋值
                     * @return DiSourceTke 是否已赋值
                     * 
                     */
                    bool DiSourceTkeHasBeenSet() const;

                private:

                    /**
                     * 数据链路采集源类型，如cvm_collector、tke_collector
                     */
                    std::string m_diSourceType;
                    bool m_diSourceTypeHasBeenSet;

                    /**
                     * cvm数据源
                     */
                    DiSourceCvm m_diSourceCvm;
                    bool m_diSourceCvmHasBeenSet;

                    /**
                     * tke数据源
                     */
                    DiSourceTke m_diSourceTke;
                    bool m_diSourceTkeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_SERVERLESSDI_H_
