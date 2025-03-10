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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_ADDON_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_ADDON_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * addon的具体描述
                */
                class Addon : public AbstractModel
                {
                public:
                    Addon();
                    ~Addon() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取addon名称
                     * @return AddonName addon名称
                     * 
                     */
                    std::string GetAddonName() const;

                    /**
                     * 设置addon名称
                     * @param _addonName addon名称
                     * 
                     */
                    void SetAddonName(const std::string& _addonName);

                    /**
                     * 判断参数 AddonName 是否已赋值
                     * @return AddonName 是否已赋值
                     * 
                     */
                    bool AddonNameHasBeenSet() const;

                    /**
                     * 获取addon的版本
                     * @return AddonVersion addon的版本
                     * 
                     */
                    std::string GetAddonVersion() const;

                    /**
                     * 设置addon的版本
                     * @param _addonVersion addon的版本
                     * 
                     */
                    void SetAddonVersion(const std::string& _addonVersion);

                    /**
                     * 判断参数 AddonVersion 是否已赋值
                     * @return AddonVersion 是否已赋值
                     * 
                     */
                    bool AddonVersionHasBeenSet() const;

                    /**
                     * 获取addon的参数，是一个json格式的base64转码后的字符串
                     * @return RawValues addon的参数，是一个json格式的base64转码后的字符串
                     * 
                     */
                    std::string GetRawValues() const;

                    /**
                     * 设置addon的参数，是一个json格式的base64转码后的字符串
                     * @param _rawValues addon的参数，是一个json格式的base64转码后的字符串
                     * 
                     */
                    void SetRawValues(const std::string& _rawValues);

                    /**
                     * 判断参数 RawValues 是否已赋值
                     * @return RawValues 是否已赋值
                     * 
                     */
                    bool RawValuesHasBeenSet() const;

                    /**
                     * 获取addon的状态
                     * @return Phase addon的状态
                     * 
                     */
                    std::string GetPhase() const;

                    /**
                     * 设置addon的状态
                     * @param _phase addon的状态
                     * 
                     */
                    void SetPhase(const std::string& _phase);

                    /**
                     * 判断参数 Phase 是否已赋值
                     * @return Phase 是否已赋值
                     * 
                     */
                    bool PhaseHasBeenSet() const;

                    /**
                     * 获取addon失败的原因
                     * @return Reason addon失败的原因
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置addon失败的原因
                     * @param _reason addon失败的原因
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取addon的创建时间
                     * @return CreateTime addon的创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置addon的创建时间
                     * @param _createTime addon的创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * addon名称
                     */
                    std::string m_addonName;
                    bool m_addonNameHasBeenSet;

                    /**
                     * addon的版本
                     */
                    std::string m_addonVersion;
                    bool m_addonVersionHasBeenSet;

                    /**
                     * addon的参数，是一个json格式的base64转码后的字符串
                     */
                    std::string m_rawValues;
                    bool m_rawValuesHasBeenSet;

                    /**
                     * addon的状态
                     */
                    std::string m_phase;
                    bool m_phaseHasBeenSet;

                    /**
                     * addon失败的原因
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * addon的创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_ADDON_H_
