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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEPOLICY_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CycleScanConf.h>
#include <tencentcloud/csip/v20221121/model/BaselinePolicySystemCategoryConf.h>
#include <tencentcloud/csip/v20221121/model/BaselineCustomItemConf.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 基线策略
                */
                class BaselinePolicy : public AbstractModel
                {
                public:
                    BaselinePolicy();
                    ~BaselinePolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>周期扫描配置（开关、间隔类型、扫描时段等）。</p>
                     * @return CycleScanConf <p>周期扫描配置（开关、间隔类型、扫描时段等）。</p>
                     * 
                     */
                    CycleScanConf GetCycleScanConf() const;

                    /**
                     * 设置<p>周期扫描配置（开关、间隔类型、扫描时段等）。</p>
                     * @param _cycleScanConf <p>周期扫描配置（开关、间隔类型、扫描时段等）。</p>
                     * 
                     */
                    void SetCycleScanConf(const CycleScanConf& _cycleScanConf);

                    /**
                     * 判断参数 CycleScanConf 是否已赋值
                     * @return CycleScanConf 是否已赋值
                     * 
                     */
                    bool CycleScanConfHasBeenSet() const;

                    /**
                     * 获取<p>检测资产大类，区分主机基线与容器集群基线。取值：</p><ul><li>HOST：主机</li><li>CLUSTER：容器集群</li></ul>
                     * @return CheckAssetType <p>检测资产大类，区分主机基线与容器集群基线。取值：</p><ul><li>HOST：主机</li><li>CLUSTER：容器集群</li></ul>
                     * 
                     */
                    std::string GetCheckAssetType() const;

                    /**
                     * 设置<p>检测资产大类，区分主机基线与容器集群基线。取值：</p><ul><li>HOST：主机</li><li>CLUSTER：容器集群</li></ul>
                     * @param _checkAssetType <p>检测资产大类，区分主机基线与容器集群基线。取值：</p><ul><li>HOST：主机</li><li>CLUSTER：容器集群</li></ul>
                     * 
                     */
                    void SetCheckAssetType(const std::string& _checkAssetType);

                    /**
                     * 判断参数 CheckAssetType 是否已赋值
                     * @return CheckAssetType 是否已赋值
                     * 
                     */
                    bool CheckAssetTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否在系统新增内置检测项时自动加入本策略。true 自动加入，false 不加入。</p>
                     * @return AutoSyncItem <p>是否在系统新增内置检测项时自动加入本策略。true 自动加入，false 不加入。</p>
                     * 
                     */
                    bool GetAutoSyncItem() const;

                    /**
                     * 设置<p>是否在系统新增内置检测项时自动加入本策略。true 自动加入，false 不加入。</p>
                     * @param _autoSyncItem <p>是否在系统新增内置检测项时自动加入本策略。true 自动加入，false 不加入。</p>
                     * 
                     */
                    void SetAutoSyncItem(const bool& _autoSyncItem);

                    /**
                     * 判断参数 AutoSyncItem 是否已赋值
                     * @return AutoSyncItem 是否已赋值
                     * 
                     */
                    bool AutoSyncItemHasBeenSet() const;

                    /**
                     * 获取<p>基线策略类型。取值：</p><ul><li>SYSTEM：系统策略（CSIP 内置）</li><li>SELF：用户自定义策略</li></ul>
                     * @return Type <p>基线策略类型。取值：</p><ul><li>SYSTEM：系统策略（CSIP 内置）</li><li>SELF：用户自定义策略</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>基线策略类型。取值：</p><ul><li>SYSTEM：系统策略（CSIP 内置）</li><li>SELF：用户自定义策略</li></ul>
                     * @param _type <p>基线策略类型。取值：</p><ul><li>SYSTEM：系统策略（CSIP 内置）</li><li>SELF：用户自定义策略</li></ul>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>策略名称（自定义策略由用户填写，系统策略为内置分类名）。</p>
                     * @return Name <p>策略名称（自定义策略由用户填写，系统策略为内置分类名）。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>策略名称（自定义策略由用户填写，系统策略为内置分类名）。</p>
                     * @param _name <p>策略名称（自定义策略由用户填写，系统策略为内置分类名）。</p>
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
                     * 获取<p>策略描述。</p>
                     * @return Description <p>策略描述。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>策略描述。</p>
                     * @param _description <p>策略描述。</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>主机生效范围。取值：</p><ul><li>ALL：全部主机（可配合 ConfHostExcludeList 剔除）</li><li>TAG_MATCH：按标签匹配，配合 ConfHostTagValue</li><li>PICK：仅在 ConfHostIncludeList 指定的主机生效</li><li>NONE：未配置</li></ul>
                     * @return ConfHostType <p>主机生效范围。取值：</p><ul><li>ALL：全部主机（可配合 ConfHostExcludeList 剔除）</li><li>TAG_MATCH：按标签匹配，配合 ConfHostTagValue</li><li>PICK：仅在 ConfHostIncludeList 指定的主机生效</li><li>NONE：未配置</li></ul>
                     * 
                     */
                    std::string GetConfHostType() const;

                    /**
                     * 设置<p>主机生效范围。取值：</p><ul><li>ALL：全部主机（可配合 ConfHostExcludeList 剔除）</li><li>TAG_MATCH：按标签匹配，配合 ConfHostTagValue</li><li>PICK：仅在 ConfHostIncludeList 指定的主机生效</li><li>NONE：未配置</li></ul>
                     * @param _confHostType <p>主机生效范围。取值：</p><ul><li>ALL：全部主机（可配合 ConfHostExcludeList 剔除）</li><li>TAG_MATCH：按标签匹配，配合 ConfHostTagValue</li><li>PICK：仅在 ConfHostIncludeList 指定的主机生效</li><li>NONE：未配置</li></ul>
                     * 
                     */
                    void SetConfHostType(const std::string& _confHostType);

                    /**
                     * 判断参数 ConfHostType 是否已赋值
                     * @return ConfHostType 是否已赋值
                     * 
                     */
                    bool ConfHostTypeHasBeenSet() const;

                    /**
                     * 获取<p>主机 InstanceID 白名单，在 ConfHostType=PICK / TAG_MATCH 时使用。</p>
                     * @return ConfHostIncludeList <p>主机 InstanceID 白名单，在 ConfHostType=PICK / TAG_MATCH 时使用。</p>
                     * 
                     */
                    std::vector<std::string> GetConfHostIncludeList() const;

                    /**
                     * 设置<p>主机 InstanceID 白名单，在 ConfHostType=PICK / TAG_MATCH 时使用。</p>
                     * @param _confHostIncludeList <p>主机 InstanceID 白名单，在 ConfHostType=PICK / TAG_MATCH 时使用。</p>
                     * 
                     */
                    void SetConfHostIncludeList(const std::vector<std::string>& _confHostIncludeList);

                    /**
                     * 判断参数 ConfHostIncludeList 是否已赋值
                     * @return ConfHostIncludeList 是否已赋值
                     * 
                     */
                    bool ConfHostIncludeListHasBeenSet() const;

                    /**
                     * 获取<p>主机 InstanceID 剔除名单，在 ConfHostType=ALL 时使用。</p>
                     * @return ConfHostExcludeList <p>主机 InstanceID 剔除名单，在 ConfHostType=ALL 时使用。</p>
                     * 
                     */
                    std::vector<std::string> GetConfHostExcludeList() const;

                    /**
                     * 设置<p>主机 InstanceID 剔除名单，在 ConfHostType=ALL 时使用。</p>
                     * @param _confHostExcludeList <p>主机 InstanceID 剔除名单，在 ConfHostType=ALL 时使用。</p>
                     * 
                     */
                    void SetConfHostExcludeList(const std::vector<std::string>& _confHostExcludeList);

                    /**
                     * 判断参数 ConfHostExcludeList 是否已赋值
                     * @return ConfHostExcludeList 是否已赋值
                     * 
                     */
                    bool ConfHostExcludeListHasBeenSet() const;

                    /**
                     * 获取<p>策略启用状态。0 停用，1 启用；停用后该策略不参与扫描与统计。</p>
                     * @return Enable <p>策略启用状态。0 停用，1 启用；停用后该策略不参与扫描与统计。</p>
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置<p>策略启用状态。0 停用，1 启用；停用后该策略不参与扫描与统计。</p>
                     * @param _enable <p>策略启用状态。0 停用，1 启用；停用后该策略不参与扫描与统计。</p>
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>集群生效范围。取值：</p><ul><li>ALL：全部集群（可配合 ConfClusterExcludeList 剔除）</li><li>PICK：仅在 ConfClusterIncludeList 指定的集群生效</li><li>NONE：未配置</li></ul>
                     * @return ConfClusterType <p>集群生效范围。取值：</p><ul><li>ALL：全部集群（可配合 ConfClusterExcludeList 剔除）</li><li>PICK：仅在 ConfClusterIncludeList 指定的集群生效</li><li>NONE：未配置</li></ul>
                     * 
                     */
                    std::string GetConfClusterType() const;

                    /**
                     * 设置<p>集群生效范围。取值：</p><ul><li>ALL：全部集群（可配合 ConfClusterExcludeList 剔除）</li><li>PICK：仅在 ConfClusterIncludeList 指定的集群生效</li><li>NONE：未配置</li></ul>
                     * @param _confClusterType <p>集群生效范围。取值：</p><ul><li>ALL：全部集群（可配合 ConfClusterExcludeList 剔除）</li><li>PICK：仅在 ConfClusterIncludeList 指定的集群生效</li><li>NONE：未配置</li></ul>
                     * 
                     */
                    void SetConfClusterType(const std::string& _confClusterType);

                    /**
                     * 判断参数 ConfClusterType 是否已赋值
                     * @return ConfClusterType 是否已赋值
                     * 
                     */
                    bool ConfClusterTypeHasBeenSet() const;

                    /**
                     * 获取<p>集群 ID 白名单，在 ConfClusterType=PICK 时使用。</p>
                     * @return ConfClusterIncludeList <p>集群 ID 白名单，在 ConfClusterType=PICK 时使用。</p>
                     * 
                     */
                    std::vector<std::string> GetConfClusterIncludeList() const;

                    /**
                     * 设置<p>集群 ID 白名单，在 ConfClusterType=PICK 时使用。</p>
                     * @param _confClusterIncludeList <p>集群 ID 白名单，在 ConfClusterType=PICK 时使用。</p>
                     * 
                     */
                    void SetConfClusterIncludeList(const std::vector<std::string>& _confClusterIncludeList);

                    /**
                     * 判断参数 ConfClusterIncludeList 是否已赋值
                     * @return ConfClusterIncludeList 是否已赋值
                     * 
                     */
                    bool ConfClusterIncludeListHasBeenSet() const;

                    /**
                     * 获取<p>集群 ID 剔除名单，在 ConfClusterType=ALL 时使用。</p>
                     * @return ConfClusterExcludeList <p>集群 ID 剔除名单，在 ConfClusterType=ALL 时使用。</p>
                     * 
                     */
                    std::vector<std::string> GetConfClusterExcludeList() const;

                    /**
                     * 设置<p>集群 ID 剔除名单，在 ConfClusterType=ALL 时使用。</p>
                     * @param _confClusterExcludeList <p>集群 ID 剔除名单，在 ConfClusterType=ALL 时使用。</p>
                     * 
                     */
                    void SetConfClusterExcludeList(const std::vector<std::string>& _confClusterExcludeList);

                    /**
                     * 判断参数 ConfClusterExcludeList 是否已赋值
                     * @return ConfClusterExcludeList 是否已赋值
                     * 
                     */
                    bool ConfClusterExcludeListHasBeenSet() const;

                    /**
                     * 获取<p>系统分类 / 子分类 / 检测项的命中配置（仅系统策略生效）。</p>
                     * @return CategoryConf <p>系统分类 / 子分类 / 检测项的命中配置（仅系统策略生效）。</p>
                     * 
                     */
                    std::vector<BaselinePolicySystemCategoryConf> GetCategoryConf() const;

                    /**
                     * 设置<p>系统分类 / 子分类 / 检测项的命中配置（仅系统策略生效）。</p>
                     * @param _categoryConf <p>系统分类 / 子分类 / 检测项的命中配置（仅系统策略生效）。</p>
                     * 
                     */
                    void SetCategoryConf(const std::vector<BaselinePolicySystemCategoryConf>& _categoryConf);

                    /**
                     * 判断参数 CategoryConf 是否已赋值
                     * @return CategoryConf 是否已赋值
                     * 
                     */
                    bool CategoryConfHasBeenSet() const;

                    /**
                     * 获取<p>自定义检测项的取值配置列表（在系统检测项基础上覆盖判定值）。</p>
                     * @return CustomItemConf <p>自定义检测项的取值配置列表（在系统检测项基础上覆盖判定值）。</p>
                     * 
                     */
                    std::vector<BaselineCustomItemConf> GetCustomItemConf() const;

                    /**
                     * 设置<p>自定义检测项的取值配置列表（在系统检测项基础上覆盖判定值）。</p>
                     * @param _customItemConf <p>自定义检测项的取值配置列表（在系统检测项基础上覆盖判定值）。</p>
                     * 
                     */
                    void SetCustomItemConf(const std::vector<BaselineCustomItemConf>& _customItemConf);

                    /**
                     * 判断参数 CustomItemConf 是否已赋值
                     * @return CustomItemConf 是否已赋值
                     * 
                     */
                    bool CustomItemConfHasBeenSet() const;

                    /**
                     * 获取<p>策略所属租户 Appid。</p>
                     * @return Appid <p>策略所属租户 Appid。</p>
                     * 
                     */
                    uint64_t GetAppid() const;

                    /**
                     * 设置<p>策略所属租户 Appid。</p>
                     * @param _appid <p>策略所属租户 Appid。</p>
                     * 
                     */
                    void SetAppid(const uint64_t& _appid);

                    /**
                     * 判断参数 Appid 是否已赋值
                     * @return Appid 是否已赋值
                     * 
                     */
                    bool AppidHasBeenSet() const;

                    /**
                     * 获取<p>基线策略 ID。</p>
                     * @return ID <p>基线策略 ID。</p>
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置<p>基线策略 ID。</p>
                     * @param _iD <p>基线策略 ID。</p>
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>当前策略已配置的检测项数量。</p>
                     * @return ConfItemCount <p>当前策略已配置的检测项数量。</p>
                     * 
                     */
                    uint64_t GetConfItemCount() const;

                    /**
                     * 设置<p>当前策略已配置的检测项数量。</p>
                     * @param _confItemCount <p>当前策略已配置的检测项数量。</p>
                     * 
                     */
                    void SetConfItemCount(const uint64_t& _confItemCount);

                    /**
                     * 判断参数 ConfItemCount 是否已赋值
                     * @return ConfItemCount 是否已赋值
                     * 
                     */
                    bool ConfItemCountHasBeenSet() const;

                    /**
                     * 获取<p>当前策略命中的主机数量。</p>
                     * @return ConfHostCount <p>当前策略命中的主机数量。</p>
                     * 
                     */
                    uint64_t GetConfHostCount() const;

                    /**
                     * 设置<p>当前策略命中的主机数量。</p>
                     * @param _confHostCount <p>当前策略命中的主机数量。</p>
                     * 
                     */
                    void SetConfHostCount(const uint64_t& _confHostCount);

                    /**
                     * 判断参数 ConfHostCount 是否已赋值
                     * @return ConfHostCount 是否已赋值
                     * 
                     */
                    bool ConfHostCountHasBeenSet() const;

                    /**
                     * 获取<p>当前策略命中的集群数量。</p>
                     * @return ConfClusterCount <p>当前策略命中的集群数量。</p>
                     * 
                     */
                    uint64_t GetConfClusterCount() const;

                    /**
                     * 设置<p>当前策略命中的集群数量。</p>
                     * @param _confClusterCount <p>当前策略命中的集群数量。</p>
                     * 
                     */
                    void SetConfClusterCount(const uint64_t& _confClusterCount);

                    /**
                     * 判断参数 ConfClusterCount 是否已赋值
                     * @return ConfClusterCount 是否已赋值
                     * 
                     */
                    bool ConfClusterCountHasBeenSet() const;

                    /**
                     * 获取<p>策略当前进行中的扫描主任务 ID；未在扫描时为 0。</p>
                     * @return ScanningTaskID <p>策略当前进行中的扫描主任务 ID；未在扫描时为 0。</p>
                     * 
                     */
                    uint64_t GetScanningTaskID() const;

                    /**
                     * 设置<p>策略当前进行中的扫描主任务 ID；未在扫描时为 0。</p>
                     * @param _scanningTaskID <p>策略当前进行中的扫描主任务 ID；未在扫描时为 0。</p>
                     * 
                     */
                    void SetScanningTaskID(const uint64_t& _scanningTaskID);

                    /**
                     * 判断参数 ScanningTaskID 是否已赋值
                     * @return ScanningTaskID 是否已赋值
                     * 
                     */
                    bool ScanningTaskIDHasBeenSet() const;

                    /**
                     * 获取<p>最近一次扫描完成时间（含手动 / 周期）。</p>
                     * @return LatestScanTime <p>最近一次扫描完成时间（含手动 / 周期）。</p>
                     * 
                     */
                    std::string GetLatestScanTime() const;

                    /**
                     * 设置<p>最近一次扫描完成时间（含手动 / 周期）。</p>
                     * @param _latestScanTime <p>最近一次扫描完成时间（含手动 / 周期）。</p>
                     * 
                     */
                    void SetLatestScanTime(const std::string& _latestScanTime);

                    /**
                     * 判断参数 LatestScanTime 是否已赋值
                     * @return LatestScanTime 是否已赋值
                     * 
                     */
                    bool LatestScanTimeHasBeenSet() const;

                    /**
                     * 获取<p>最近一次周期性扫描完成时间。</p>
                     * @return LatestCycleScanTime <p>最近一次周期性扫描完成时间。</p>
                     * 
                     */
                    std::string GetLatestCycleScanTime() const;

                    /**
                     * 设置<p>最近一次周期性扫描完成时间。</p>
                     * @param _latestCycleScanTime <p>最近一次周期性扫描完成时间。</p>
                     * 
                     */
                    void SetLatestCycleScanTime(const std::string& _latestCycleScanTime);

                    /**
                     * 判断参数 LatestCycleScanTime 是否已赋值
                     * @return LatestCycleScanTime 是否已赋值
                     * 
                     */
                    bool LatestCycleScanTimeHasBeenSet() const;

                    /**
                     * 获取<p>安全中心标签ID列表</p>
                     * @return TagIDList <p>安全中心标签ID列表</p>
                     * 
                     */
                    std::vector<uint64_t> GetTagIDList() const;

                    /**
                     * 设置<p>安全中心标签ID列表</p>
                     * @param _tagIDList <p>安全中心标签ID列表</p>
                     * 
                     */
                    void SetTagIDList(const std::vector<uint64_t>& _tagIDList);

                    /**
                     * 判断参数 TagIDList 是否已赋值
                     * @return TagIDList 是否已赋值
                     * 
                     */
                    bool TagIDListHasBeenSet() const;

                    /**
                     * 获取<p>云标签列表</p>
                     * @return CloudTagList <p>云标签列表</p>
                     * 
                     */
                    std::vector<std::string> GetCloudTagList() const;

                    /**
                     * 设置<p>云标签列表</p>
                     * @param _cloudTagList <p>云标签列表</p>
                     * 
                     */
                    void SetCloudTagList(const std::vector<std::string>& _cloudTagList);

                    /**
                     * 判断参数 CloudTagList 是否已赋值
                     * @return CloudTagList 是否已赋值
                     * 
                     */
                    bool CloudTagListHasBeenSet() const;

                private:

                    /**
                     * <p>周期扫描配置（开关、间隔类型、扫描时段等）。</p>
                     */
                    CycleScanConf m_cycleScanConf;
                    bool m_cycleScanConfHasBeenSet;

                    /**
                     * <p>检测资产大类，区分主机基线与容器集群基线。取值：</p><ul><li>HOST：主机</li><li>CLUSTER：容器集群</li></ul>
                     */
                    std::string m_checkAssetType;
                    bool m_checkAssetTypeHasBeenSet;

                    /**
                     * <p>是否在系统新增内置检测项时自动加入本策略。true 自动加入，false 不加入。</p>
                     */
                    bool m_autoSyncItem;
                    bool m_autoSyncItemHasBeenSet;

                    /**
                     * <p>基线策略类型。取值：</p><ul><li>SYSTEM：系统策略（CSIP 内置）</li><li>SELF：用户自定义策略</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>策略名称（自定义策略由用户填写，系统策略为内置分类名）。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>策略描述。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>主机生效范围。取值：</p><ul><li>ALL：全部主机（可配合 ConfHostExcludeList 剔除）</li><li>TAG_MATCH：按标签匹配，配合 ConfHostTagValue</li><li>PICK：仅在 ConfHostIncludeList 指定的主机生效</li><li>NONE：未配置</li></ul>
                     */
                    std::string m_confHostType;
                    bool m_confHostTypeHasBeenSet;

                    /**
                     * <p>主机 InstanceID 白名单，在 ConfHostType=PICK / TAG_MATCH 时使用。</p>
                     */
                    std::vector<std::string> m_confHostIncludeList;
                    bool m_confHostIncludeListHasBeenSet;

                    /**
                     * <p>主机 InstanceID 剔除名单，在 ConfHostType=ALL 时使用。</p>
                     */
                    std::vector<std::string> m_confHostExcludeList;
                    bool m_confHostExcludeListHasBeenSet;

                    /**
                     * <p>策略启用状态。0 停用，1 启用；停用后该策略不参与扫描与统计。</p>
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>集群生效范围。取值：</p><ul><li>ALL：全部集群（可配合 ConfClusterExcludeList 剔除）</li><li>PICK：仅在 ConfClusterIncludeList 指定的集群生效</li><li>NONE：未配置</li></ul>
                     */
                    std::string m_confClusterType;
                    bool m_confClusterTypeHasBeenSet;

                    /**
                     * <p>集群 ID 白名单，在 ConfClusterType=PICK 时使用。</p>
                     */
                    std::vector<std::string> m_confClusterIncludeList;
                    bool m_confClusterIncludeListHasBeenSet;

                    /**
                     * <p>集群 ID 剔除名单，在 ConfClusterType=ALL 时使用。</p>
                     */
                    std::vector<std::string> m_confClusterExcludeList;
                    bool m_confClusterExcludeListHasBeenSet;

                    /**
                     * <p>系统分类 / 子分类 / 检测项的命中配置（仅系统策略生效）。</p>
                     */
                    std::vector<BaselinePolicySystemCategoryConf> m_categoryConf;
                    bool m_categoryConfHasBeenSet;

                    /**
                     * <p>自定义检测项的取值配置列表（在系统检测项基础上覆盖判定值）。</p>
                     */
                    std::vector<BaselineCustomItemConf> m_customItemConf;
                    bool m_customItemConfHasBeenSet;

                    /**
                     * <p>策略所属租户 Appid。</p>
                     */
                    uint64_t m_appid;
                    bool m_appidHasBeenSet;

                    /**
                     * <p>基线策略 ID。</p>
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>当前策略已配置的检测项数量。</p>
                     */
                    uint64_t m_confItemCount;
                    bool m_confItemCountHasBeenSet;

                    /**
                     * <p>当前策略命中的主机数量。</p>
                     */
                    uint64_t m_confHostCount;
                    bool m_confHostCountHasBeenSet;

                    /**
                     * <p>当前策略命中的集群数量。</p>
                     */
                    uint64_t m_confClusterCount;
                    bool m_confClusterCountHasBeenSet;

                    /**
                     * <p>策略当前进行中的扫描主任务 ID；未在扫描时为 0。</p>
                     */
                    uint64_t m_scanningTaskID;
                    bool m_scanningTaskIDHasBeenSet;

                    /**
                     * <p>最近一次扫描完成时间（含手动 / 周期）。</p>
                     */
                    std::string m_latestScanTime;
                    bool m_latestScanTimeHasBeenSet;

                    /**
                     * <p>最近一次周期性扫描完成时间。</p>
                     */
                    std::string m_latestCycleScanTime;
                    bool m_latestCycleScanTimeHasBeenSet;

                    /**
                     * <p>安全中心标签ID列表</p>
                     */
                    std::vector<uint64_t> m_tagIDList;
                    bool m_tagIDListHasBeenSet;

                    /**
                     * <p>云标签列表</p>
                     */
                    std::vector<std::string> m_cloudTagList;
                    bool m_cloudTagListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEPOLICY_H_
