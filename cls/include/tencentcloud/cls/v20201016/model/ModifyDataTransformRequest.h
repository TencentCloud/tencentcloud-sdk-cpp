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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYDATATRANSFORMREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYDATATRANSFORMREQUEST_H_

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
                * ModifyDataTransform请求参数结构体
                */
                class ModifyDataTransformRequest : public AbstractModel
                {
                public:
                    ModifyDataTransformRequest();
                    ~ModifyDataTransformRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取加工任务id
                     * @return TaskId 加工任务id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置加工任务id
                     * @param _taskId 加工任务id
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取加工任务名称
                     * @return Name 加工任务名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置加工任务名称
                     * @param _name 加工任务名称
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
                     * 获取任务启动状态. 默认为1，开启,  2关闭
                     * @return EnableFlag 任务启动状态. 默认为1，开启,  2关闭
                     * 
                     */
                    int64_t GetEnableFlag() const;

                    /**
                     * 设置任务启动状态. 默认为1，开启,  2关闭
                     * @param _enableFlag 任务启动状态. 默认为1，开启,  2关闭
                     * 
                     */
                    void SetEnableFlag(const int64_t& _enableFlag);

                    /**
                     * 判断参数 EnableFlag 是否已赋值
                     * @return EnableFlag 是否已赋值
                     * 
                     */
                    bool EnableFlagHasBeenSet() const;

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
                     * 获取是否开启投递服务日志。1关闭，2开启
                     * @return HasServicesLog 是否开启投递服务日志。1关闭，2开启
                     * 
                     */
                    uint64_t GetHasServicesLog() const;

                    /**
                     * 设置是否开启投递服务日志。1关闭，2开启
                     * @param _hasServicesLog 是否开启投递服务日志。1关闭，2开启
                     * 
                     */
                    void SetHasServicesLog(const uint64_t& _hasServicesLog);

                    /**
                     * 判断参数 HasServicesLog 是否已赋值
                     * @return HasServicesLog 是否已赋值
                     * 
                     */
                    bool HasServicesLogHasBeenSet() const;

                private:

                    /**
                     * 加工任务id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 加工任务名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 加工语句。 当FuncType为2时，EtlContent必须使用[log_auto_output](https://cloud.tencent.com/document/product/614/70733#b3c58797-4825-4807-bef4-68106e25024f) 

其他参考文档：

- [创建加工任务](https://cloud.tencent.com/document/product/614/63940) 
-  [函数总览](https://cloud.tencent.com/document/product/614/70395)
                     */
                    std::string m_etlContent;
                    bool m_etlContentHasBeenSet;

                    /**
                     * 任务启动状态. 默认为1，开启,  2关闭
                     */
                    int64_t m_enableFlag;
                    bool m_enableFlagHasBeenSet;

                    /**
                     * 加工任务目的topic_id以及别名
                     */
                    std::vector<DataTransformResouceInfo> m_dstResources;
                    bool m_dstResourcesHasBeenSet;

                    /**
                     * 是否开启投递服务日志。1关闭，2开启
                     */
                    uint64_t m_hasServicesLog;
                    bool m_hasServicesLogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYDATATRANSFORMREQUEST_H_
