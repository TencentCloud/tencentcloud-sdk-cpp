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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_TARGETOS_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_TARGETOS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 操作系统转换的目标操作系统信息
                */
                class TargetOS : public AbstractModel
                {
                public:
                    TargetOS();
                    ~TargetOS() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取目标操作系统类型
                     * @return TargetOSType 目标操作系统类型
                     * 
                     */
                    std::string GetTargetOSType() const;

                    /**
                     * 设置目标操作系统类型
                     * @param _targetOSType 目标操作系统类型
                     * 
                     */
                    void SetTargetOSType(const std::string& _targetOSType);

                    /**
                     * 判断参数 TargetOSType 是否已赋值
                     * @return TargetOSType 是否已赋值
                     * 
                     */
                    bool TargetOSTypeHasBeenSet() const;

                    /**
                     * 获取目标操作系统版本
                     * @return TargetOSVersion 目标操作系统版本
                     * 
                     */
                    std::string GetTargetOSVersion() const;

                    /**
                     * 设置目标操作系统版本
                     * @param _targetOSVersion 目标操作系统版本
                     * 
                     */
                    void SetTargetOSVersion(const std::string& _targetOSVersion);

                    /**
                     * 判断参数 TargetOSVersion 是否已赋值
                     * @return TargetOSVersion 是否已赋值
                     * 
                     */
                    bool TargetOSVersionHasBeenSet() const;

                private:

                    /**
                     * 目标操作系统类型
                     */
                    std::string m_targetOSType;
                    bool m_targetOSTypeHasBeenSet;

                    /**
                     * 目标操作系统版本
                     */
                    std::string m_targetOSVersion;
                    bool m_targetOSVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_TARGETOS_H_
