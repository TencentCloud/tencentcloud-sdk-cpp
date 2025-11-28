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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CREATEROLLOUTSEQUENCEREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CREATEROLLOUTSEQUENCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/SequenceFlow.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * CreateRollOutSequence请求参数结构体
                */
                class CreateRollOutSequenceRequest : public AbstractModel
                {
                public:
                    CreateRollOutSequenceRequest();
                    ~CreateRollOutSequenceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取发布序列名称
                     * @return Name 发布序列名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置发布序列名称
                     * @param _name 发布序列名称
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
                     * 获取发布序列步骤
                     * @return SequenceFlows 发布序列步骤
                     * 
                     */
                    std::vector<SequenceFlow> GetSequenceFlows() const;

                    /**
                     * 设置发布序列步骤
                     * @param _sequenceFlows 发布序列步骤
                     * 
                     */
                    void SetSequenceFlows(const std::vector<SequenceFlow>& _sequenceFlows);

                    /**
                     * 判断参数 SequenceFlows 是否已赋值
                     * @return SequenceFlows 是否已赋值
                     * 
                     */
                    bool SequenceFlowsHasBeenSet() const;

                    /**
                     * 获取是否启用
                     * @return Enabled 是否启用
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否启用
                     * @param _enabled 是否启用
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * 发布序列名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 发布序列步骤
                     */
                    std::vector<SequenceFlow> m_sequenceFlows;
                    bool m_sequenceFlowsHasBeenSet;

                    /**
                     * 是否启用
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CREATEROLLOUTSEQUENCEREQUEST_H_
