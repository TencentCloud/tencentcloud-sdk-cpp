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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETINFODETAIL_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETINFODETAIL_H_

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
                * 资产扫描结构细节
                */
                class AssetInfoDetail : public AbstractModel
                {
                public:
                    AssetInfoDetail();
                    ~AssetInfoDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户appid
                     * @return AppID 用户appid
                     * 
                     */
                    std::string GetAppID() const;

                    /**
                     * 设置用户appid
                     * @param _appID 用户appid
                     * 
                     */
                    void SetAppID(const std::string& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取CVE编号
                     * @return CVEId CVE编号
                     * 
                     */
                    std::string GetCVEId() const;

                    /**
                     * 设置CVE编号
                     * @param _cVEId CVE编号
                     * 
                     */
                    void SetCVEId(const std::string& _cVEId);

                    /**
                     * 判断参数 CVEId 是否已赋值
                     * @return CVEId 是否已赋值
                     * 
                     */
                    bool CVEIdHasBeenSet() const;

                    /**
                     * 获取是扫描，0默认未扫描，1正在扫描，2扫描完成，3扫描出错
                     * @return IsScan 是扫描，0默认未扫描，1正在扫描，2扫描完成，3扫描出错
                     * 
                     */
                    int64_t GetIsScan() const;

                    /**
                     * 设置是扫描，0默认未扫描，1正在扫描，2扫描完成，3扫描出错
                     * @param _isScan 是扫描，0默认未扫描，1正在扫描，2扫描完成，3扫描出错
                     * 
                     */
                    void SetIsScan(const int64_t& _isScan);

                    /**
                     * 判断参数 IsScan 是否已赋值
                     * @return IsScan 是否已赋值
                     * 
                     */
                    bool IsScanHasBeenSet() const;

                    /**
                     * 获取影响资产数目
                     * @return InfluenceAsset 影响资产数目
                     * 
                     */
                    int64_t GetInfluenceAsset() const;

                    /**
                     * 设置影响资产数目
                     * @param _influenceAsset 影响资产数目
                     * 
                     */
                    void SetInfluenceAsset(const int64_t& _influenceAsset);

                    /**
                     * 判断参数 InfluenceAsset 是否已赋值
                     * @return InfluenceAsset 是否已赋值
                     * 
                     */
                    bool InfluenceAssetHasBeenSet() const;

                    /**
                     * 获取未修复资产数目
                     * @return NotRepairAsset 未修复资产数目
                     * 
                     */
                    int64_t GetNotRepairAsset() const;

                    /**
                     * 设置未修复资产数目
                     * @param _notRepairAsset 未修复资产数目
                     * 
                     */
                    void SetNotRepairAsset(const int64_t& _notRepairAsset);

                    /**
                     * 判断参数 NotRepairAsset 是否已赋值
                     * @return NotRepairAsset 是否已赋值
                     * 
                     */
                    bool NotRepairAssetHasBeenSet() const;

                    /**
                     * 获取未防护资产数目
                     * @return NotProtectAsset 未防护资产数目
                     * 
                     */
                    int64_t GetNotProtectAsset() const;

                    /**
                     * 设置未防护资产数目
                     * @param _notProtectAsset 未防护资产数目
                     * 
                     */
                    void SetNotProtectAsset(const int64_t& _notProtectAsset);

                    /**
                     * 判断参数 NotProtectAsset 是否已赋值
                     * @return NotProtectAsset 是否已赋值
                     * 
                     */
                    bool NotProtectAssetHasBeenSet() const;

                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务百分比
                     * @return TaskPercent 任务百分比
                     * 
                     */
                    int64_t GetTaskPercent() const;

                    /**
                     * 设置任务百分比
                     * @param _taskPercent 任务百分比
                     * 
                     */
                    void SetTaskPercent(const int64_t& _taskPercent);

                    /**
                     * 判断参数 TaskPercent 是否已赋值
                     * @return TaskPercent 是否已赋值
                     * 
                     */
                    bool TaskPercentHasBeenSet() const;

                    /**
                     * 获取任务时间
                     * @return TaskTime 任务时间
                     * 
                     */
                    int64_t GetTaskTime() const;

                    /**
                     * 设置任务时间
                     * @param _taskTime 任务时间
                     * 
                     */
                    void SetTaskTime(const int64_t& _taskTime);

                    /**
                     * 判断参数 TaskTime 是否已赋值
                     * @return TaskTime 是否已赋值
                     * 
                     */
                    bool TaskTimeHasBeenSet() const;

                    /**
                     * 获取扫描时间
                     * @return ScanTime 扫描时间
                     * 
                     */
                    std::string GetScanTime() const;

                    /**
                     * 设置扫描时间
                     * @param _scanTime 扫描时间
                     * 
                     */
                    void SetScanTime(const std::string& _scanTime);

                    /**
                     * 判断参数 ScanTime 是否已赋值
                     * @return ScanTime 是否已赋值
                     * 
                     */
                    bool ScanTimeHasBeenSet() const;

                private:

                    /**
                     * 用户appid
                     */
                    std::string m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * CVE编号
                     */
                    std::string m_cVEId;
                    bool m_cVEIdHasBeenSet;

                    /**
                     * 是扫描，0默认未扫描，1正在扫描，2扫描完成，3扫描出错
                     */
                    int64_t m_isScan;
                    bool m_isScanHasBeenSet;

                    /**
                     * 影响资产数目
                     */
                    int64_t m_influenceAsset;
                    bool m_influenceAssetHasBeenSet;

                    /**
                     * 未修复资产数目
                     */
                    int64_t m_notRepairAsset;
                    bool m_notRepairAssetHasBeenSet;

                    /**
                     * 未防护资产数目
                     */
                    int64_t m_notProtectAsset;
                    bool m_notProtectAssetHasBeenSet;

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务百分比
                     */
                    int64_t m_taskPercent;
                    bool m_taskPercentHasBeenSet;

                    /**
                     * 任务时间
                     */
                    int64_t m_taskTime;
                    bool m_taskTimeHasBeenSet;

                    /**
                     * 扫描时间
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETINFODETAIL_H_
