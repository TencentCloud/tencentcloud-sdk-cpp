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
                     * 获取<p>子公司ID</p>
                     * @return EnterpriseUid <p>子公司ID</p>
                     * 
                     */
                    std::string GetEnterpriseUid() const;

                    /**
                     * 设置<p>子公司ID</p>
                     * @param _enterpriseUid <p>子公司ID</p>
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
                     * 获取<p>子公司名称</p>
                     * @return EnterpriseName <p>子公司名称</p>
                     * 
                     */
                    std::string GetEnterpriseName() const;

                    /**
                     * 设置<p>子公司名称</p>
                     * @param _enterpriseName <p>子公司名称</p>
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
                     * 获取<p>主任务ID</p>
                     * @return JobId <p>主任务ID</p>
                     * 
                     */
                    int64_t GetJobId() const;

                    /**
                     * 设置<p>主任务ID</p>
                     * @param _jobId <p>主任务ID</p>
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
                     * 获取<p>单任务ID</p>
                     * @return JobStageId <p>单任务ID</p>
                     * 
                     */
                    int64_t GetJobStageId() const;

                    /**
                     * 设置<p>单任务ID</p>
                     * @param _jobStageId <p>单任务ID</p>
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
                     * 获取<p>是否忽略</p>
                     * @return Ignored <p>是否忽略</p>
                     * 
                     */
                    bool GetIgnored() const;

                    /**
                     * 设置<p>是否忽略</p>
                     * @param _ignored <p>是否忽略</p>
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
                     * 获取<p>子任务ID</p>
                     * @return JobRecordId <p>子任务ID</p>
                     * 
                     */
                    int64_t GetJobRecordId() const;

                    /**
                     * 设置<p>子任务ID</p>
                     * @param _jobRecordId <p>子任务ID</p>
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
                     * 获取<p>企业ID</p>
                     * @return CustomerId <p>企业ID</p>
                     * 
                     */
                    int64_t GetCustomerId() const;

                    /**
                     * 设置<p>企业ID</p>
                     * @param _customerId <p>企业ID</p>
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
                     * 获取<p>企业名称</p>
                     * @return CustomerName <p>企业名称</p>
                     * 
                     */
                    std::string GetCustomerName() const;

                    /**
                     * 设置<p>企业名称</p>
                     * @param _customerName <p>企业名称</p>
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
                     * 获取<p>详情</p>
                     * @return Detail <p>详情</p>
                     * 
                     */
                    std::string GetDetail() const;

                    /**
                     * 设置<p>详情</p>
                     * @param _detail <p>详情</p>
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
                     * 获取<p>Md5值</p>
                     * @return Md5 <p>Md5值</p>
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置<p>Md5值</p>
                     * @param _md5 <p>Md5值</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreateAt <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateAt() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createAt <p>创建时间</p>
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
                     * 获取<p>更新时间</p>
                     * @return UpdateAt <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdateAt() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updateAt <p>更新时间</p>
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
                     * 获取<p>标签列表，json格式：{"tag1":["责任人xxx"],"tag2":["测试站"]}</p>
                     * @return Labels <p>标签列表，json格式：{"tag1":["责任人xxx"],"tag2":["测试站"]}</p>
                     * 
                     */
                    std::string GetLabels() const;

                    /**
                     * 设置<p>标签列表，json格式：{"tag1":["责任人xxx"],"tag2":["测试站"]}</p>
                     * @param _labels <p>标签列表，json格式：{"tag1":["责任人xxx"],"tag2":["测试站"]}</p>
                     * 
                     */
                    void SetLabels(const std::string& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取<p>演示模式是否明文展示</p><p>枚举值：</p><ul><li>0： 否</li><li>1： 是</li></ul>
                     * @return IsPlainTextInDemo <p>演示模式是否明文展示</p><p>枚举值：</p><ul><li>0： 否</li><li>1： 是</li></ul>
                     * 
                     */
                    int64_t GetIsPlainTextInDemo() const;

                    /**
                     * 设置<p>演示模式是否明文展示</p><p>枚举值：</p><ul><li>0： 否</li><li>1： 是</li></ul>
                     * @param _isPlainTextInDemo <p>演示模式是否明文展示</p><p>枚举值：</p><ul><li>0： 否</li><li>1： 是</li></ul>
                     * 
                     */
                    void SetIsPlainTextInDemo(const int64_t& _isPlainTextInDemo);

                    /**
                     * 判断参数 IsPlainTextInDemo 是否已赋值
                     * @return IsPlainTextInDemo 是否已赋值
                     * 
                     */
                    bool IsPlainTextInDemoHasBeenSet() const;

                private:

                    /**
                     * <p>子公司ID</p>
                     */
                    std::string m_enterpriseUid;
                    bool m_enterpriseUidHasBeenSet;

                    /**
                     * <p>子公司名称</p>
                     */
                    std::string m_enterpriseName;
                    bool m_enterpriseNameHasBeenSet;

                    /**
                     * <p>主任务ID</p>
                     */
                    int64_t m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>单任务ID</p>
                     */
                    int64_t m_jobStageId;
                    bool m_jobStageIdHasBeenSet;

                    /**
                     * <p>是否忽略</p>
                     */
                    bool m_ignored;
                    bool m_ignoredHasBeenSet;

                    /**
                     * <p>子任务ID</p>
                     */
                    int64_t m_jobRecordId;
                    bool m_jobRecordIdHasBeenSet;

                    /**
                     * <p>企业ID</p>
                     */
                    int64_t m_customerId;
                    bool m_customerIdHasBeenSet;

                    /**
                     * <p>企业名称</p>
                     */
                    std::string m_customerName;
                    bool m_customerNameHasBeenSet;

                    /**
                     * <p>详情</p>
                     */
                    std::string m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * <p>Md5值</p>
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createAt;
                    bool m_createAtHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateAt;
                    bool m_updateAtHasBeenSet;

                    /**
                     * <p>标签列表，json格式：{"tag1":["责任人xxx"],"tag2":["测试站"]}</p>
                     */
                    std::string m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * <p>演示模式是否明文展示</p><p>枚举值：</p><ul><li>0： 否</li><li>1： 是</li></ul>
                     */
                    int64_t m_isPlainTextInDemo;
                    bool m_isPlainTextInDemoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYTOOLCOMMON_H_
