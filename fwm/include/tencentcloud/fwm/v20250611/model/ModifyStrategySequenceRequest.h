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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_MODIFYSTRATEGYSEQUENCEREQUEST_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_MODIFYSTRATEGYSEQUENCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/fwm/v20250611/model/SequenceIndex.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * ModifyStrategySequence请求参数结构体
                */
                class ModifyStrategySequenceRequest : public AbstractModel
                {
                public:
                    ModifyStrategySequenceRequest();
                    ~ModifyStrategySequenceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取优先级列表
                     * @return Sequences 优先级列表
                     * 
                     */
                    std::vector<SequenceIndex> GetSequences() const;

                    /**
                     * 设置优先级列表
                     * @param _sequences 优先级列表
                     * 
                     */
                    void SetSequences(const std::vector<SequenceIndex>& _sequences);

                    /**
                     * 判断参数 Sequences 是否已赋值
                     * @return Sequences 是否已赋值
                     * 
                     */
                    bool SequencesHasBeenSet() const;

                    /**
                     * 获取执行区域
                     * @return ExecArea 执行区域
                     * 
                     */
                    std::string GetExecArea() const;

                    /**
                     * 设置执行区域
                     * @param _execArea 执行区域
                     * 
                     */
                    void SetExecArea(const std::string& _execArea);

                    /**
                     * 判断参数 ExecArea 是否已赋值
                     * @return ExecArea 是否已赋值
                     * 
                     */
                    bool ExecAreaHasBeenSet() const;

                    /**
                     * 获取产品类型
                     * @return Product 产品类型
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置产品类型
                     * @param _product 产品类型
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * 优先级列表
                     */
                    std::vector<SequenceIndex> m_sequences;
                    bool m_sequencesHasBeenSet;

                    /**
                     * 执行区域
                     */
                    std::string m_execArea;
                    bool m_execAreaHasBeenSet;

                    /**
                     * 产品类型
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_MODIFYSTRATEGYSEQUENCEREQUEST_H_
