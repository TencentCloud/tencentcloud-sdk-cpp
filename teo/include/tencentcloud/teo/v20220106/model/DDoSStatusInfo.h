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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DDOSSTATUSINFO_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DDOSSTATUSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DDoS封禁等级
                */
                class DDoSStatusInfo : public AbstractModel
                {
                public:
                    DDoSStatusInfo();
                    ~DDoSStatusInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取不支持，填off
                     * @return AiStatus 不支持，填off
                     */
                    std::string GetAiStatus() const;

                    /**
                     * 设置不支持，填off
                     * @param AiStatus 不支持，填off
                     */
                    void SetAiStatus(const std::string& _aiStatus);

                    /**
                     * 判断参数 AiStatus 是否已赋值
                     * @return AiStatus 是否已赋值
                     */
                    bool AiStatusHasBeenSet() const;

                    /**
                     * 获取用户appid
                     * @return Appid 用户appid
                     */
                    std::string GetAppid() const;

                    /**
                     * 设置用户appid
                     * @param Appid 用户appid
                     */
                    void SetAppid(const std::string& _appid);

                    /**
                     * 判断参数 Appid 是否已赋值
                     * @return Appid 是否已赋值
                     */
                    bool AppidHasBeenSet() const;

                    /**
                     * 获取策略等级 low, middle, high
                     * @return PlyLevel 策略等级 low, middle, high
                     */
                    std::string GetPlyLevel() const;

                    /**
                     * 设置策略等级 low, middle, high
                     * @param PlyLevel 策略等级 low, middle, high
                     */
                    void SetPlyLevel(const std::string& _plyLevel);

                    /**
                     * 判断参数 PlyLevel 是否已赋值
                     * @return PlyLevel 是否已赋值
                     */
                    bool PlyLevelHasBeenSet() const;

                private:

                    /**
                     * 不支持，填off
                     */
                    std::string m_aiStatus;
                    bool m_aiStatusHasBeenSet;

                    /**
                     * 用户appid
                     */
                    std::string m_appid;
                    bool m_appidHasBeenSet;

                    /**
                     * 策略等级 low, middle, high
                     */
                    std::string m_plyLevel;
                    bool m_plyLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DDOSSTATUSINFO_H_
