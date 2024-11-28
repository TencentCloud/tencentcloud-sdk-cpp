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

#ifndef TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_USGRULEDETAIL_H_
#define TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_USGRULEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudhsm/v20191112/model/UsgPolicy.h>


namespace TencentCloud
{
    namespace Cloudhsm
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * 安全组规则详情
                */
                class UsgRuleDetail : public AbstractModel
                {
                public:
                    UsgRuleDetail();
                    ~UsgRuleDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取入站规则
                     * @return InBound 入站规则
                     * 
                     */
                    std::vector<UsgPolicy> GetInBound() const;

                    /**
                     * 设置入站规则
                     * @param _inBound 入站规则
                     * 
                     */
                    void SetInBound(const std::vector<UsgPolicy>& _inBound);

                    /**
                     * 判断参数 InBound 是否已赋值
                     * @return InBound 是否已赋值
                     * 
                     */
                    bool InBoundHasBeenSet() const;

                    /**
                     * 获取出站规则
                     * @return OutBound 出站规则
                     * 
                     */
                    std::vector<UsgPolicy> GetOutBound() const;

                    /**
                     * 设置出站规则
                     * @param _outBound 出站规则
                     * 
                     */
                    void SetOutBound(const std::vector<UsgPolicy>& _outBound);

                    /**
                     * 判断参数 OutBound 是否已赋值
                     * @return OutBound 是否已赋值
                     * 
                     */
                    bool OutBoundHasBeenSet() const;

                    /**
                     * 获取安全组Id
                     * @return SgId 安全组Id
                     * 
                     */
                    std::string GetSgId() const;

                    /**
                     * 设置安全组Id
                     * @param _sgId 安全组Id
                     * 
                     */
                    void SetSgId(const std::string& _sgId);

                    /**
                     * 判断参数 SgId 是否已赋值
                     * @return SgId 是否已赋值
                     * 
                     */
                    bool SgIdHasBeenSet() const;

                    /**
                     * 获取安全组名称
                     * @return SgName 安全组名称
                     * 
                     */
                    std::string GetSgName() const;

                    /**
                     * 设置安全组名称
                     * @param _sgName 安全组名称
                     * 
                     */
                    void SetSgName(const std::string& _sgName);

                    /**
                     * 判断参数 SgName 是否已赋值
                     * @return SgName 是否已赋值
                     * 
                     */
                    bool SgNameHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return SgRemark 备注
                     * 
                     */
                    std::string GetSgRemark() const;

                    /**
                     * 设置备注
                     * @param _sgRemark 备注
                     * 
                     */
                    void SetSgRemark(const std::string& _sgRemark);

                    /**
                     * 判断参数 SgRemark 是否已赋值
                     * @return SgRemark 是否已赋值
                     * 
                     */
                    bool SgRemarkHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取版本
                     * @return Version 版本
                     * 
                     */
                    int64_t GetVersion() const;

                    /**
                     * 设置版本
                     * @param _version 版本
                     * 
                     */
                    void SetVersion(const int64_t& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                private:

                    /**
                     * 入站规则
                     */
                    std::vector<UsgPolicy> m_inBound;
                    bool m_inBoundHasBeenSet;

                    /**
                     * 出站规则
                     */
                    std::vector<UsgPolicy> m_outBound;
                    bool m_outBoundHasBeenSet;

                    /**
                     * 安全组Id
                     */
                    std::string m_sgId;
                    bool m_sgIdHasBeenSet;

                    /**
                     * 安全组名称
                     */
                    std::string m_sgName;
                    bool m_sgNameHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_sgRemark;
                    bool m_sgRemarkHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 版本
                     */
                    int64_t m_version;
                    bool m_versionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_USGRULEDETAIL_H_
