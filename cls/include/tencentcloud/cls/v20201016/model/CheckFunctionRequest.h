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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CHECKFUNCTIONREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CHECKFUNCTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/DataTransformResouceInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CheckFunction请求参数结构体
                */
                class CheckFunctionRequest : public AbstractModel
                {
                public:
                    CheckFunctionRequest();
                    ~CheckFunctionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户输入的加工语句
                     * @return EtlContent 用户输入的加工语句
                     * 
                     */
                    std::string GetEtlContent() const;

                    /**
                     * 设置用户输入的加工语句
                     * @param _etlContent 用户输入的加工语句
                     * 
                     */
                    void SetEtlContent(const std::string& _etlContent);

                    /**
                     * 判断参数 EtlContent 是否已赋值
                     * @return EtlContent 是否已赋值
                     * 
                     */
                    bool EtlContentHasBeenSet() const;

                    /**
                     * 获取加工任务目的topic_id以及别名
                     * @return DstResources 加工任务目的topic_id以及别名
                     * 
                     */
                    std::vector<DataTransformResouceInfo> GetDstResources() const;

                    /**
                     * 设置加工任务目的topic_id以及别名
                     * @param _dstResources 加工任务目的topic_id以及别名
                     * 
                     */
                    void SetDstResources(const std::vector<DataTransformResouceInfo>& _dstResources);

                    /**
                     * 判断参数 DstResources 是否已赋值
                     * @return DstResources 是否已赋值
                     * 
                     */
                    bool DstResourcesHasBeenSet() const;

                    /**
                     * 获取数据加工目标主题的类型. 1 固定主题 2动态创建
                     * @return FuncType 数据加工目标主题的类型. 1 固定主题 2动态创建
                     * 
                     */
                    int64_t GetFuncType() const;

                    /**
                     * 设置数据加工目标主题的类型. 1 固定主题 2动态创建
                     * @param _funcType 数据加工目标主题的类型. 1 固定主题 2动态创建
                     * 
                     */
                    void SetFuncType(const int64_t& _funcType);

                    /**
                     * 判断参数 FuncType 是否已赋值
                     * @return FuncType 是否已赋值
                     * 
                     */
                    bool FuncTypeHasBeenSet() const;

                private:

                    /**
                     * 用户输入的加工语句
                     */
                    std::string m_etlContent;
                    bool m_etlContentHasBeenSet;

                    /**
                     * 加工任务目的topic_id以及别名
                     */
                    std::vector<DataTransformResouceInfo> m_dstResources;
                    bool m_dstResourcesHasBeenSet;

                    /**
                     * 数据加工目标主题的类型. 1 固定主题 2动态创建
                     */
                    int64_t m_funcType;
                    bool m_funcTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CHECKFUNCTIONREQUEST_H_
