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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYDDOSAISTATUSREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYDDOSAISTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * ModifyDDoSAIStatus请求参数结构体
                */
                class ModifyDDoSAIStatusRequest : public AbstractModel
                {
                public:
                    ModifyDDoSAIStatusRequest();
                    ~ModifyDDoSAIStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     * @return Business 大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     * @param _business 大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取资源ID
                     * @return Id 资源ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置资源ID
                     * @param _id 资源ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取=get表示读取AI防护状态；=set表示修改AI防护状态；
                     * @return Method =get表示读取AI防护状态；=set表示修改AI防护状态；
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置=get表示读取AI防护状态；=set表示修改AI防护状态；
                     * @param _method =get表示读取AI防护状态；=set表示修改AI防护状态；
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取AI防护状态，取值[on，off]；当Method=set时必填；
                     * @return DDoSAI AI防护状态，取值[on，off]；当Method=set时必填；
                     * 
                     */
                    std::string GetDDoSAI() const;

                    /**
                     * 设置AI防护状态，取值[on，off]；当Method=set时必填；
                     * @param _dDoSAI AI防护状态，取值[on，off]；当Method=set时必填；
                     * 
                     */
                    void SetDDoSAI(const std::string& _dDoSAI);

                    /**
                     * 判断参数 DDoSAI 是否已赋值
                     * @return DDoSAI 是否已赋值
                     * 
                     */
                    bool DDoSAIHasBeenSet() const;

                private:

                    /**
                     * 大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 资源ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * =get表示读取AI防护状态；=set表示修改AI防护状态；
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * AI防护状态，取值[on，off]；当Method=set时必填；
                     */
                    std::string m_dDoSAI;
                    bool m_dDoSAIHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYDDOSAISTATUSREQUEST_H_
