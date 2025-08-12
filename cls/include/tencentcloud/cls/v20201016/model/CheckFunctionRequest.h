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
                     * 获取加工语句。 当FuncType为2时，EtlContent必须使用[log_auto_output](https://cloud.tencent.com/document/product/614/70733#b3c58797-4825-4807-bef4-68106e25024f) 

其他参考文档：

- [创建加工任务](https://cloud.tencent.com/document/product/614/63940) 
-  [函数总览](https://cloud.tencent.com/document/product/614/70395)
                     * @return EtlContent 加工语句。 当FuncType为2时，EtlContent必须使用[log_auto_output](https://cloud.tencent.com/document/product/614/70733#b3c58797-4825-4807-bef4-68106e25024f) 

其他参考文档：

- [创建加工任务](https://cloud.tencent.com/document/product/614/63940) 
-  [函数总览](https://cloud.tencent.com/document/product/614/70395)
                     * 
                     */
                    std::string GetEtlContent() const;

                    /**
                     * 设置加工语句。 当FuncType为2时，EtlContent必须使用[log_auto_output](https://cloud.tencent.com/document/product/614/70733#b3c58797-4825-4807-bef4-68106e25024f) 

其他参考文档：

- [创建加工任务](https://cloud.tencent.com/document/product/614/63940) 
-  [函数总览](https://cloud.tencent.com/document/product/614/70395)
                     * @param _etlContent 加工语句。 当FuncType为2时，EtlContent必须使用[log_auto_output](https://cloud.tencent.com/document/product/614/70733#b3c58797-4825-4807-bef4-68106e25024f) 

其他参考文档：

- [创建加工任务](https://cloud.tencent.com/document/product/614/63940) 
-  [函数总览](https://cloud.tencent.com/document/product/614/70395)
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
                     * 获取加工任务目标topic_id以及别名，当 FuncType 为 1 时，必填。
目标日志主题ID通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
                     * @return DstResources 加工任务目标topic_id以及别名，当 FuncType 为 1 时，必填。
目标日志主题ID通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
                     * 
                     */
                    std::vector<DataTransformResouceInfo> GetDstResources() const;

                    /**
                     * 设置加工任务目标topic_id以及别名，当 FuncType 为 1 时，必填。
目标日志主题ID通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
                     * @param _dstResources 加工任务目标topic_id以及别名，当 FuncType 为 1 时，必填。
目标日志主题ID通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
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
                     * 加工语句。 当FuncType为2时，EtlContent必须使用[log_auto_output](https://cloud.tencent.com/document/product/614/70733#b3c58797-4825-4807-bef4-68106e25024f) 

其他参考文档：

- [创建加工任务](https://cloud.tencent.com/document/product/614/63940) 
-  [函数总览](https://cloud.tencent.com/document/product/614/70395)
                     */
                    std::string m_etlContent;
                    bool m_etlContentHasBeenSet;

                    /**
                     * 加工任务目标topic_id以及别名，当 FuncType 为 1 时，必填。
目标日志主题ID通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
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
