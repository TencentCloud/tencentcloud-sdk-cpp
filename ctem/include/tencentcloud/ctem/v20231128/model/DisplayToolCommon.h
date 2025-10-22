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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYTOOLCOMMON_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYTOOLCOMMON_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * 数据管理公共字段
                */
                class DisplayToolCommon : public AbstractModel
                {
                public:
                    DisplayToolCommon();
                    ~DisplayToolCommon() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取子公司ID
                     * @return EnterpriseUid 子公司ID
                     * 
                     */
                    std::string GetEnterpriseUid() const;

                    /**
                     * 设置子公司ID
                     * @param _enterpriseUid 子公司ID
                     * 
                     */
                    void SetEnterpriseUid(const std::string& _enterpriseUid);

                    /**
                     * 判断参数 EnterpriseUid 是否已赋值
                     * @return EnterpriseUid 是否已赋值
                     * 
                     */
                    bool EnterpriseUidHasBeenSet() const;

                    /**
                     * 获取子公司名称
                     * @return EnterpriseName 子公司名称
                     * 
                     */
                    std::string GetEnterpriseName() const;

                    /**
                     * 设置子公司名称
                     * @param _enterpriseName 子公司名称
                     * 
                     */
                    void SetEnterpriseName(const std::string& _enterpriseName);

                    /**
                     * 判断参数 EnterpriseName 是否已赋值
                     * @return EnterpriseName 是否已赋值
                     * 
                     */
                    bool EnterpriseNameHasBeenSet() const;

                    /**
                     * 获取主任务ID
                     * @return JobId 主任务ID
                     * 
                     */
                    int64_t GetJobId() const;

                    /**
                     * 设置主任务ID
                     * @param _jobId 主任务ID
                     * 
                     */
                    void SetJobId(const int64_t& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取单任务ID
                     * @return JobStageId 单任务ID
                     * 
                     */
                    int64_t GetJobStageId() const;

                    /**
                     * 设置单任务ID
                     * @param _jobStageId 单任务ID
                     * 
                     */
                    void SetJobStageId(const int64_t& _jobStageId);

                    /**
                     * 判断参数 JobStageId 是否已赋值
                     * @return JobStageId 是否已赋值
                     * 
                     */
                    bool JobStageIdHasBeenSet() const;

                    /**
                     * 获取是否忽略
                     * @return Ignored 是否忽略
                     * 
                     */
                    bool GetIgnored() const;

                    /**
                     * 设置是否忽略
                     * @param _ignored 是否忽略
                     * 
                     */
                    void SetIgnored(const bool& _ignored);

                    /**
                     * 判断参数 Ignored 是否已赋值
                     * @return Ignored 是否已赋值
                     * 
                     */
                    bool IgnoredHasBeenSet() const;

                    /**
                     * 获取子任务ID
                     * @return JobRecordId 子任务ID
                     * 
                     */
                    int64_t GetJobRecordId() const;

                    /**
                     * 设置子任务ID
                     * @param _jobRecordId 子任务ID
                     * 
                     */
                    void SetJobRecordId(const int64_t& _jobRecordId);

                    /**
                     * 判断参数 JobRecordId 是否已赋值
                     * @return JobRecordId 是否已赋值
                     * 
                     */
                    bool JobRecordIdHasBeenSet() const;

                    /**
                     * 获取企业ID
                     * @return CustomerId 企业ID
                     * 
                     */
                    int64_t GetCustomerId() const;

                    /**
                     * 设置企业ID
                     * @param _customerId 企业ID
                     * 
                     */
                    void SetCustomerId(const int64_t& _customerId);

                    /**
                     * 判断参数 CustomerId 是否已赋值
                     * @return CustomerId 是否已赋值
                     * 
                     */
                    bool CustomerIdHasBeenSet() const;

                    /**
                     * 获取企业名称
                     * @return CustomerName 企业名称
                     * 
                     */
                    std::string GetCustomerName() const;

                    /**
                     * 设置企业名称
                     * @param _customerName 企业名称
                     * 
                     */
                    void SetCustomerName(const std::string& _customerName);

                    /**
                     * 判断参数 CustomerName 是否已赋值
                     * @return CustomerName 是否已赋值
                     * 
                     */
                    bool CustomerNameHasBeenSet() const;

                    /**
                     * 获取详情
                     * @return Detail 详情
                     * 
                     */
                    std::string GetDetail() const;

                    /**
                     * 设置详情
                     * @param _detail 详情
                     * 
                     */
                    void SetDetail(const std::string& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取Md5值
                     * @return Md5 Md5值
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置Md5值
                     * @param _md5 Md5值
                     * 
                     */
                    void SetMd5(const std::string& _md5);

                    /**
                     * 判断参数 Md5 是否已赋值
                     * @return Md5 是否已赋值
                     * 
                     */
                    bool Md5HasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateAt 创建时间
                     * 
                     */
                    std::string GetCreateAt() const;

                    /**
                     * 设置创建时间
                     * @param _createAt 创建时间
                     * 
                     */
                    void SetCreateAt(const std::string& _createAt);

                    /**
                     * 判断参数 CreateAt 是否已赋值
                     * @return CreateAt 是否已赋值
                     * 
                     */
                    bool CreateAtHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateAt 更新时间
                     * 
                     */
                    std::string GetUpdateAt() const;

                    /**
                     * 设置更新时间
                     * @param _updateAt 更新时间
                     * 
                     */
                    void SetUpdateAt(const std::string& _updateAt);

                    /**
                     * 判断参数 UpdateAt 是否已赋值
                     * @return UpdateAt 是否已赋值
                     * 
                     */
                    bool UpdateAtHasBeenSet() const;

                    /**
                     * 获取标签列表，json格式：{\"tag1\":[\"责任人xxx\"],\"tag2\":[\"测试站\"]}
                     * @return Labels 标签列表，json格式：{\"tag1\":[\"责任人xxx\"],\"tag2\":[\"测试站\"]}
                     * 
                     */
                    std::string GetLabels() const;

                    /**
                     * 设置标签列表，json格式：{\"tag1\":[\"责任人xxx\"],\"tag2\":[\"测试站\"]}
                     * @param _labels 标签列表，json格式：{\"tag1\":[\"责任人xxx\"],\"tag2\":[\"测试站\"]}
                     * 
                     */
                    void SetLabels(const std::string& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                private:

                    /**
                     * 子公司ID
                     */
                    std::string m_enterpriseUid;
                    bool m_enterpriseUidHasBeenSet;

                    /**
                     * 子公司名称
                     */
                    std::string m_enterpriseName;
                    bool m_enterpriseNameHasBeenSet;

                    /**
                     * 主任务ID
                     */
                    int64_t m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 单任务ID
                     */
                    int64_t m_jobStageId;
                    bool m_jobStageIdHasBeenSet;

                    /**
                     * 是否忽略
                     */
                    bool m_ignored;
                    bool m_ignoredHasBeenSet;

                    /**
                     * 子任务ID
                     */
                    int64_t m_jobRecordId;
                    bool m_jobRecordIdHasBeenSet;

                    /**
                     * 企业ID
                     */
                    int64_t m_customerId;
                    bool m_customerIdHasBeenSet;

                    /**
                     * 企业名称
                     */
                    std::string m_customerName;
                    bool m_customerNameHasBeenSet;

                    /**
                     * 详情
                     */
                    std::string m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * Md5值
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createAt;
                    bool m_createAtHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateAt;
                    bool m_updateAtHasBeenSet;

                    /**
                     * 标签列表，json格式：{\"tag1\":[\"责任人xxx\"],\"tag2\":[\"测试站\"]}
                     */
                    std::string m_labels;
                    bool m_labelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYTOOLCOMMON_H_
