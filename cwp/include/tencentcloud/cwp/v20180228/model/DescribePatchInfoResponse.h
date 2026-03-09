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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEPATCHINFORESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEPATCHINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/RelateVulInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribePatchInfo返回参数结构体
                */
                class DescribePatchInfoResponse : public AbstractModel
                {
                public:
                    DescribePatchInfoResponse();
                    ~DescribePatchInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取kb编号
                     * @return KbNo kb编号
                     * 
                     */
                    std::string GetKbNo() const;

                    /**
                     * 判断参数 KbNo 是否已赋值
                     * @return KbNo 是否已赋值
                     * 
                     */
                    bool KbNoHasBeenSet() const;

                    /**
                     * 获取kb名称
                     * @return PatchName kb名称
                     * 
                     */
                    std::string GetPatchName() const;

                    /**
                     * 判断参数 PatchName 是否已赋值
                     * @return PatchName 是否已赋值
                     * 
                     */
                    bool PatchNameHasBeenSet() const;

                    /**
                     * 获取kb 发布日期
                     * @return PublishTime kb 发布日期
                     * 
                     */
                    std::string GetPublishTime() const;

                    /**
                     * 判断参数 PublishTime 是否已赋值
                     * @return PublishTime 是否已赋值
                     * 
                     */
                    bool PublishTimeHasBeenSet() const;

                    /**
                     * 获取参考链接
                     * @return ReferUrl 参考链接
                     * 
                     */
                    std::string GetReferUrl() const;

                    /**
                     * 判断参数 ReferUrl 是否已赋值
                     * @return ReferUrl 是否已赋值
                     * 
                     */
                    bool ReferUrlHasBeenSet() const;

                    /**
                     * 获取包含漏洞数
                     * @return VulCount 包含漏洞数
                     * 
                     */
                    uint64_t GetVulCount() const;

                    /**
                     * 判断参数 VulCount 是否已赋值
                     * @return VulCount 是否已赋值
                     * 
                     */
                    bool VulCountHasBeenSet() const;

                    /**
                     * 获取补丁关联的漏洞详情列表
                     * @return RelateVulInfoList 补丁关联的漏洞详情列表
                     * 
                     */
                    std::vector<RelateVulInfo> GetRelateVulInfoList() const;

                    /**
                     * 判断参数 RelateVulInfoList 是否已赋值
                     * @return RelateVulInfoList 是否已赋值
                     * 
                     */
                    bool RelateVulInfoListHasBeenSet() const;

                    /**
                     * 获取补丁id
                     * @return KbId 补丁id
                     * 
                     */
                    uint64_t GetKbId() const;

                    /**
                     * 判断参数 KbId 是否已赋值
                     * @return KbId 是否已赋值
                     * 
                     */
                    bool KbIdHasBeenSet() const;

                    /**
                     * 获取关联的漏洞CveId，多个id由","分隔
                     * @return RelateVulCveId 关联的漏洞CveId，多个id由","分隔
                     * 
                     */
                    std::string GetRelateVulCveId() const;

                    /**
                     * 判断参数 RelateVulCveId 是否已赋值
                     * @return RelateVulCveId 是否已赋值
                     * 
                     */
                    bool RelateVulCveIdHasBeenSet() const;

                private:

                    /**
                     * kb编号
                     */
                    std::string m_kbNo;
                    bool m_kbNoHasBeenSet;

                    /**
                     * kb名称
                     */
                    std::string m_patchName;
                    bool m_patchNameHasBeenSet;

                    /**
                     * kb 发布日期
                     */
                    std::string m_publishTime;
                    bool m_publishTimeHasBeenSet;

                    /**
                     * 参考链接
                     */
                    std::string m_referUrl;
                    bool m_referUrlHasBeenSet;

                    /**
                     * 包含漏洞数
                     */
                    uint64_t m_vulCount;
                    bool m_vulCountHasBeenSet;

                    /**
                     * 补丁关联的漏洞详情列表
                     */
                    std::vector<RelateVulInfo> m_relateVulInfoList;
                    bool m_relateVulInfoListHasBeenSet;

                    /**
                     * 补丁id
                     */
                    uint64_t m_kbId;
                    bool m_kbIdHasBeenSet;

                    /**
                     * 关联的漏洞CveId，多个id由","分隔
                     */
                    std::string m_relateVulCveId;
                    bool m_relateVulCveIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEPATCHINFORESPONSE_H_
