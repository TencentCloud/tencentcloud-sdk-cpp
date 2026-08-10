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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULWHITELIST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULWHITELIST_H_

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
                * 漏洞白名单
                */
                class VulWhitelist : public AbstractModel
                {
                public:
                    VulWhitelist();
                    ~VulWhitelist() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>id</p>
                     * @return Id <p>id</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>id</p>
                     * @param _id <p>id</p>
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>漏洞名称</p>
                     * @return Name <p>漏洞名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>漏洞名称</p>
                     * @param _name <p>漏洞名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>备注</p>
                     * @return Remark <p>备注</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注</p>
                     * @param _remark <p>备注</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>所属账号</p>
                     * @return AppId <p>所属账号</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>所属账号</p>
                     * @param _appId <p>所属账号</p>
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>资产列表</p>
                     * @return AssetList <p>资产列表</p>
                     * 
                     */
                    std::vector<std::string> GetAssetList() const;

                    /**
                     * 设置<p>资产列表</p>
                     * @param _assetList <p>资产列表</p>
                     * 
                     */
                    void SetAssetList(const std::vector<std::string>& _assetList);

                    /**
                     * 判断参数 AssetList 是否已赋值
                     * @return AssetList 是否已赋值
                     * 
                     */
                    bool AssetListHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updateTime <p>更新时间</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>策略开关（0-关闭, 1-开启）</p>
                     * @return Switch <p>策略开关（0-关闭, 1-开启）</p>
                     * 
                     */
                    int64_t GetSwitch() const;

                    /**
                     * 设置<p>策略开关（0-关闭, 1-开启）</p>
                     * @param _switch <p>策略开关（0-关闭, 1-开启）</p>
                     * 
                     */
                    void SetSwitch(const int64_t& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取<p>资产范围</p><p>枚举值：</p><ul><li>0： 全部资产</li><li>1： 自选资产</li><li>2： 全选排除资产</li></ul>
                     * @return AssetRange <p>资产范围</p><p>枚举值：</p><ul><li>0： 全部资产</li><li>1： 自选资产</li><li>2： 全选排除资产</li></ul>
                     * 
                     */
                    uint64_t GetAssetRange() const;

                    /**
                     * 设置<p>资产范围</p><p>枚举值：</p><ul><li>0： 全部资产</li><li>1： 自选资产</li><li>2： 全选排除资产</li></ul>
                     * @param _assetRange <p>资产范围</p><p>枚举值：</p><ul><li>0： 全部资产</li><li>1： 自选资产</li><li>2： 全选排除资产</li></ul>
                     * 
                     */
                    void SetAssetRange(const uint64_t& _assetRange);

                    /**
                     * 判断参数 AssetRange 是否已赋值
                     * @return AssetRange 是否已赋值
                     * 
                     */
                    bool AssetRangeHasBeenSet() const;

                    /**
                     * 获取<p>补丁KB id</p>
                     * @return KBId <p>补丁KB id</p>
                     * 
                     */
                    uint64_t GetKBId() const;

                    /**
                     * 设置<p>补丁KB id</p>
                     * @param _kBId <p>补丁KB id</p>
                     * 
                     */
                    void SetKBId(const uint64_t& _kBId);

                    /**
                     * 判断参数 KBId 是否已赋值
                     * @return KBId 是否已赋值
                     * 
                     */
                    bool KBIdHasBeenSet() const;

                    /**
                     * 获取<p>漏洞Id</p>
                     * @return VulId <p>漏洞Id</p>
                     * 
                     */
                    uint64_t GetVulId() const;

                    /**
                     * 设置<p>漏洞Id</p>
                     * @param _vulId <p>漏洞Id</p>
                     * 
                     */
                    void SetVulId(const uint64_t& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                private:

                    /**
                     * <p>id</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>漏洞名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>所属账号</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>资产列表</p>
                     */
                    std::vector<std::string> m_assetList;
                    bool m_assetListHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>策略开关（0-关闭, 1-开启）</p>
                     */
                    int64_t m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * <p>资产范围</p><p>枚举值：</p><ul><li>0： 全部资产</li><li>1： 自选资产</li><li>2： 全选排除资产</li></ul>
                     */
                    uint64_t m_assetRange;
                    bool m_assetRangeHasBeenSet;

                    /**
                     * <p>补丁KB id</p>
                     */
                    uint64_t m_kBId;
                    bool m_kBIdHasBeenSet;

                    /**
                     * <p>漏洞Id</p>
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULWHITELIST_H_
