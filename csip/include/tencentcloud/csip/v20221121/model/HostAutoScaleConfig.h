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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTAUTOSCALECONFIG_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTAUTOSCALECONFIG_H_

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
                * 主机安全模块自动扩容配置
                */
                class HostAutoScaleConfig : public AbstractModel
                {
                public:
                    HostAutoScaleConfig();
                    ~HostAutoScaleConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>主机自动扩容开关<br>枚举值：<br>ON：开启<br>OFF：关闭<br>补充说明：不传则不修改；映射底层自动加购开关 auto_repurchase_switch</p>
                     * @return Switch <p>主机自动扩容开关<br>枚举值：<br>ON：开启<br>OFF：关闭<br>补充说明：不传则不修改；映射底层自动加购开关 auto_repurchase_switch</p>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置<p>主机自动扩容开关<br>枚举值：<br>ON：开启<br>OFF：关闭<br>补充说明：不传则不修改；映射底层自动加购开关 auto_repurchase_switch</p>
                     * @param _switch <p>主机自动扩容开关<br>枚举值：<br>ON：开启<br>OFF：关闭<br>补充说明：不传则不修改；映射底层自动加购开关 auto_repurchase_switch</p>
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取<p>扩容版本<br>枚举值：<br>PRO：专业版<br>ULTIMATE：旗舰版<br>补充说明：不传则不修改</p>
                     * @return ProtectType <p>扩容版本<br>枚举值：<br>PRO：专业版<br>ULTIMATE：旗舰版<br>补充说明：不传则不修改</p>
                     * 
                     */
                    std::string GetProtectType() const;

                    /**
                     * 设置<p>扩容版本<br>枚举值：<br>PRO：专业版<br>ULTIMATE：旗舰版<br>补充说明：不传则不修改</p>
                     * @param _protectType <p>扩容版本<br>枚举值：<br>PRO：专业版<br>ULTIMATE：旗舰版<br>补充说明：不传则不修改</p>
                     * 
                     */
                    void SetProtectType(const std::string& _protectType);

                    /**
                     * 判断参数 ProtectType 是否已赋值
                     * @return ProtectType 是否已赋值
                     * 
                     */
                    bool ProtectTypeHasBeenSet() const;

                    /**
                     * 获取<p>扩容资产范围</p><p>枚举值：</p><ul><li>ALL： 全部资产</li><li>BY_TAG： 按标签扩容</li></ul>
                     * @return AssetRange <p>扩容资产范围</p><p>枚举值：</p><ul><li>ALL： 全部资产</li><li>BY_TAG： 按标签扩容</li></ul>
                     * 
                     */
                    std::string GetAssetRange() const;

                    /**
                     * 设置<p>扩容资产范围</p><p>枚举值：</p><ul><li>ALL： 全部资产</li><li>BY_TAG： 按标签扩容</li></ul>
                     * @param _assetRange <p>扩容资产范围</p><p>枚举值：</p><ul><li>ALL： 全部资产</li><li>BY_TAG： 按标签扩容</li></ul>
                     * 
                     */
                    void SetAssetRange(const std::string& _assetRange);

                    /**
                     * 判断参数 AssetRange 是否已赋值
                     * @return AssetRange 是否已赋值
                     * 
                     */
                    bool AssetRangeHasBeenSet() const;

                    /**
                     * 获取<p>标签ID列表</p>
                     * @return TagIds <p>标签ID列表</p>
                     * 
                     */
                    std::vector<int64_t> GetTagIds() const;

                    /**
                     * 设置<p>标签ID列表</p>
                     * @param _tagIds <p>标签ID列表</p>
                     * 
                     */
                    void SetTagIds(const std::vector<int64_t>& _tagIds);

                    /**
                     * 判断参数 TagIds 是否已赋值
                     * @return TagIds 是否已赋值
                     * 
                     */
                    bool TagIdsHasBeenSet() const;

                private:

                    /**
                     * <p>主机自动扩容开关<br>枚举值：<br>ON：开启<br>OFF：关闭<br>补充说明：不传则不修改；映射底层自动加购开关 auto_repurchase_switch</p>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * <p>扩容版本<br>枚举值：<br>PRO：专业版<br>ULTIMATE：旗舰版<br>补充说明：不传则不修改</p>
                     */
                    std::string m_protectType;
                    bool m_protectTypeHasBeenSet;

                    /**
                     * <p>扩容资产范围</p><p>枚举值：</p><ul><li>ALL： 全部资产</li><li>BY_TAG： 按标签扩容</li></ul>
                     */
                    std::string m_assetRange;
                    bool m_assetRangeHasBeenSet;

                    /**
                     * <p>标签ID列表</p>
                     */
                    std::vector<int64_t> m_tagIds;
                    bool m_tagIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTAUTOSCALECONFIG_H_
