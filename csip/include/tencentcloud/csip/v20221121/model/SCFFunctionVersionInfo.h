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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SCFFUNCTIONVERSIONINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SCFFUNCTIONVERSIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * SCF 函数版本精简信息
                */
                class SCFFunctionVersionInfo : public AbstractModel
                {
                public:
                    SCFFunctionVersionInfo();
                    ~SCFFunctionVersionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取函数版本名称
参数格式：$LATEST 或数字版本号，如 1、2、3
                     * @return Version 函数版本名称
参数格式：$LATEST 或数字版本号，如 1、2、3
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置函数版本名称
参数格式：$LATEST 或数字版本号，如 1、2、3
                     * @param _version 函数版本名称
参数格式：$LATEST 或数字版本号，如 1、2、3
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取版本状态。当前实现与 Version 字段同值返回
                     * @return Status 版本状态。当前实现与 Version 字段同值返回
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置版本状态。当前实现与 Version 字段同值返回
                     * @param _status 版本状态。当前实现与 Version 字段同值返回
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 函数版本名称
参数格式：$LATEST 或数字版本号，如 1、2、3
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 版本状态。当前实现与 Version 字段同值返回
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SCFFUNCTIONVERSIONINFO_H_
