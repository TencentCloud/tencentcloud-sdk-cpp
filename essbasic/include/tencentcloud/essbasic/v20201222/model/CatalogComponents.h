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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CATALOGCOMPONENTS_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CATALOGCOMPONENTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20201222/model/Component.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * 目录流程签署区
                */
                class CatalogComponents : public AbstractModel
                {
                public:
                    CatalogComponents();
                    ~CatalogComponents() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取流程ID
                     * @return FlowId 流程ID
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置流程ID
                     * @param _flowId 流程ID
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
                     * 获取签署区列表
                     * @return SignComponents 签署区列表
                     * 
                     */
                    std::vector<Component> GetSignComponents() const;

                    /**
                     * 设置签署区列表
                     * @param _signComponents 签署区列表
                     * 
                     */
                    void SetSignComponents(const std::vector<Component>& _signComponents);

                    /**
                     * 判断参数 SignComponents 是否已赋值
                     * @return SignComponents 是否已赋值
                     * 
                     */
                    bool SignComponentsHasBeenSet() const;

                    /**
                     * 获取签署任务ID
                     * @return SignId 签署任务ID
                     * 
                     */
                    std::string GetSignId() const;

                    /**
                     * 设置签署任务ID
                     * @param _signId 签署任务ID
                     * 
                     */
                    void SetSignId(const std::string& _signId);

                    /**
                     * 判断参数 SignId 是否已赋值
                     * @return SignId 是否已赋值
                     * 
                     */
                    bool SignIdHasBeenSet() const;

                private:

                    /**
                     * 流程ID
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 签署区列表
                     */
                    std::vector<Component> m_signComponents;
                    bool m_signComponentsHasBeenSet;

                    /**
                     * 签署任务ID
                     */
                    std::string m_signId;
                    bool m_signIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CATALOGCOMPONENTS_H_
