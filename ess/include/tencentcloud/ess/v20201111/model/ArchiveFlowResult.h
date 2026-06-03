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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_ARCHIVEFLOWRESULT_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_ARCHIVEFLOWRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 归档合同结果
                */
                class ArchiveFlowResult : public AbstractModel
                {
                public:
                    ArchiveFlowResult();
                    ~ArchiveFlowResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>归档合同id</p>
                     * @return FlowId <p>归档合同id</p>
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置<p>归档合同id</p>
                     * @param _flowId <p>归档合同id</p>
                     * 
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取<p>合同处理结果</p><p>枚举值：</p><ul><li>0： 成功</li><li>1： 失败</li></ul>
                     * @return ArchiveFlowStatus <p>合同处理结果</p><p>枚举值：</p><ul><li>0： 成功</li><li>1： 失败</li></ul>
                     * 
                     */
                    int64_t GetArchiveFlowStatus() const;

                    /**
                     * 设置<p>合同处理结果</p><p>枚举值：</p><ul><li>0： 成功</li><li>1： 失败</li></ul>
                     * @param _archiveFlowStatus <p>合同处理结果</p><p>枚举值：</p><ul><li>0： 成功</li><li>1： 失败</li></ul>
                     * 
                     */
                    void SetArchiveFlowStatus(const int64_t& _archiveFlowStatus);

                    /**
                     * 判断参数 ArchiveFlowStatus 是否已赋值
                     * @return ArchiveFlowStatus 是否已赋值
                     * 
                     */
                    bool ArchiveFlowStatusHasBeenSet() const;

                    /**
                     * 获取<p>业务自定义id</p>
                     * @return BusinessId <p>业务自定义id</p>
                     * 
                     */
                    std::string GetBusinessId() const;

                    /**
                     * 设置<p>业务自定义id</p>
                     * @param _businessId <p>业务自定义id</p>
                     * 
                     */
                    void SetBusinessId(const std::string& _businessId);

                    /**
                     * 判断参数 BusinessId 是否已赋值
                     * @return BusinessId 是否已赋值
                     * 
                     */
                    bool BusinessIdHasBeenSet() const;

                    /**
                     * 获取<p>资源ID列表</p>
                     * @return ResourceIdList <p>资源ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetResourceIdList() const;

                    /**
                     * 设置<p>资源ID列表</p>
                     * @param _resourceIdList <p>资源ID列表</p>
                     * 
                     */
                    void SetResourceIdList(const std::vector<std::string>& _resourceIdList);

                    /**
                     * 判断参数 ResourceIdList 是否已赋值
                     * @return ResourceIdList 是否已赋值
                     * 
                     */
                    bool ResourceIdListHasBeenSet() const;

                    /**
                     * 获取<p>错误信息</p>
                     * @return ErrorMessage <p>错误信息</p>
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置<p>错误信息</p>
                     * @param _errorMessage <p>错误信息</p>
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                private:

                    /**
                     * <p>归档合同id</p>
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * <p>合同处理结果</p><p>枚举值：</p><ul><li>0： 成功</li><li>1： 失败</li></ul>
                     */
                    int64_t m_archiveFlowStatus;
                    bool m_archiveFlowStatusHasBeenSet;

                    /**
                     * <p>业务自定义id</p>
                     */
                    std::string m_businessId;
                    bool m_businessIdHasBeenSet;

                    /**
                     * <p>资源ID列表</p>
                     */
                    std::vector<std::string> m_resourceIdList;
                    bool m_resourceIdListHasBeenSet;

                    /**
                     * <p>错误信息</p>
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_ARCHIVEFLOWRESULT_H_
