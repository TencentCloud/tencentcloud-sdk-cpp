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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VULFIXSTATUSINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VULFIXSTATUSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/VulFixStatusHostInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 查看漏洞修复详情
                */
                class VulFixStatusInfo : public AbstractModel
                {
                public:
                    VulFixStatusInfo();
                    ~VulFixStatusInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取漏洞id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VulId 漏洞id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetVulId() const;

                    /**
                     * 设置漏洞id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vulId 漏洞id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVulId(const uint64_t& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取漏洞名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VulName 漏洞名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置漏洞名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vulName 漏洞名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVulName(const std::string& _vulName);

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     * 
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取漏洞修复进度 1-100；
                     * @return Progress 漏洞修复进度 1-100；
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置漏洞修复进度 1-100；
                     * @param _progress 漏洞修复进度 1-100；
                     * 
                     */
                    void SetProgress(const uint64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取漏洞对应主机修复状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostList 漏洞对应主机修复状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<VulFixStatusHostInfo> GetHostList() const;

                    /**
                     * 设置漏洞对应主机修复状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hostList 漏洞对应主机修复状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHostList(const std::vector<VulFixStatusHostInfo>& _hostList);

                    /**
                     * 判断参数 HostList 是否已赋值
                     * @return HostList 是否已赋值
                     * 
                     */
                    bool HostListHasBeenSet() const;

                    /**
                     * 获取漏洞修复失败主机数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailCnt 漏洞修复失败主机数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFailCnt() const;

                    /**
                     * 设置漏洞修复失败主机数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failCnt 漏洞修复失败主机数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFailCnt(const uint64_t& _failCnt);

                    /**
                     * 判断参数 FailCnt 是否已赋值
                     * @return FailCnt 是否已赋值
                     * 
                     */
                    bool FailCntHasBeenSet() const;

                    /**
                     * 获取修复成功的数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FixSuccessCnt 修复成功的数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFixSuccessCnt() const;

                    /**
                     * 设置修复成功的数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fixSuccessCnt 修复成功的数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFixSuccessCnt(const uint64_t& _fixSuccessCnt);

                    /**
                     * 判断参数 FixSuccessCnt 是否已赋值
                     * @return FixSuccessCnt 是否已赋值
                     * 
                     */
                    bool FixSuccessCntHasBeenSet() const;

                private:

                    /**
                     * 漏洞id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * 漏洞名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * 漏洞修复进度 1-100；
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 漏洞对应主机修复状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VulFixStatusHostInfo> m_hostList;
                    bool m_hostListHasBeenSet;

                    /**
                     * 漏洞修复失败主机数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_failCnt;
                    bool m_failCntHasBeenSet;

                    /**
                     * 修复成功的数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_fixSuccessCnt;
                    bool m_fixSuccessCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULFIXSTATUSINFO_H_
