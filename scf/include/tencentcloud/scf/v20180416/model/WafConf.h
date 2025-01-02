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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_WAFCONF_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_WAFCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * web应用防火墙配置信息
                */
                class WafConf : public AbstractModel
                {
                public:
                    WafConf();
                    ~WafConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取web应用防火墙是否打开， 取值范围:OPEN, CLOSE
                     * @return WafOpen web应用防火墙是否打开， 取值范围:OPEN, CLOSE
                     * 
                     */
                    std::string GetWafOpen() const;

                    /**
                     * 设置web应用防火墙是否打开， 取值范围:OPEN, CLOSE
                     * @param _wafOpen web应用防火墙是否打开， 取值范围:OPEN, CLOSE
                     * 
                     */
                    void SetWafOpen(const std::string& _wafOpen);

                    /**
                     * 判断参数 WafOpen 是否已赋值
                     * @return WafOpen 是否已赋值
                     * 
                     */
                    bool WafOpenHasBeenSet() const;

                    /**
                     * 获取web应用防火墙实例ID
                     * @return WafInstanceId web应用防火墙实例ID
                     * 
                     */
                    std::string GetWafInstanceId() const;

                    /**
                     * 设置web应用防火墙实例ID
                     * @param _wafInstanceId web应用防火墙实例ID
                     * 
                     */
                    void SetWafInstanceId(const std::string& _wafInstanceId);

                    /**
                     * 判断参数 WafInstanceId 是否已赋值
                     * @return WafInstanceId 是否已赋值
                     * 
                     */
                    bool WafInstanceIdHasBeenSet() const;

                private:

                    /**
                     * web应用防火墙是否打开， 取值范围:OPEN, CLOSE
                     */
                    std::string m_wafOpen;
                    bool m_wafOpenHasBeenSet;

                    /**
                     * web应用防火墙实例ID
                     */
                    std::string m_wafInstanceId;
                    bool m_wafInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_WAFCONF_H_
