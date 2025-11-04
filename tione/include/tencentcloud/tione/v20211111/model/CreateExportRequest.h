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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_CREATEEXPORTREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_CREATEEXPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * CreateExport请求参数结构体
                */
                class CreateExportRequest : public AbstractModel
                {
                public:
                    CreateExportRequest();
                    ~CreateExportRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务类型，TRAIN为任务式建模, NOTEBOOK为Notebook, INFER为在线服务, BATCH为批量预测枚举值：- TRAIN- NOTEBOOK- INFER- BATCH
                     * @return Service 服务类型，TRAIN为任务式建模, NOTEBOOK为Notebook, INFER为在线服务, BATCH为批量预测枚举值：- TRAIN- NOTEBOOK- INFER- BATCH
                     * 
                     */
                    std::string GetService() const;

                    /**
                     * 设置服务类型，TRAIN为任务式建模, NOTEBOOK为Notebook, INFER为在线服务, BATCH为批量预测枚举值：- TRAIN- NOTEBOOK- INFER- BATCH
                     * @param _service 服务类型，TRAIN为任务式建模, NOTEBOOK为Notebook, INFER为在线服务, BATCH为批量预测枚举值：- TRAIN- NOTEBOOK- INFER- BATCH
                     * 
                     */
                    void SetService(const std::string& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取服务ID，和Service参数对应，不同Service的服务ID获取方式不同，具体如下：- Service类型为TRAIN：  调用[DescribeTrainingTask接口](/document/product/851/75089)查询训练任务详情，ServiceId为接口返回值中Response.TrainingTaskDetail.LatestInstanceId- Service类型为NOTEBOOK：  调用[DescribeNotebook接口](/document/product/851/95662)查询Notebook详情，ServiceId为接口返回值中Response.NotebookDetail.PodName- Service类型为INFER：  调用[DescribeModelServiceGroup接口](/document/product/851/82285)查询服务组详情，ServiceId为接口返回值中Response.ServiceGroup.Services.ServiceId- Service类型为BATCH：  调用[DescribeBatchTask接口](/document/product/851/80180)查询跑批任务详情，ServiceId为接口返回值中Response.BatchTaskDetail.LatestInstanceId
                     * @return ServiceId 服务ID，和Service参数对应，不同Service的服务ID获取方式不同，具体如下：- Service类型为TRAIN：  调用[DescribeTrainingTask接口](/document/product/851/75089)查询训练任务详情，ServiceId为接口返回值中Response.TrainingTaskDetail.LatestInstanceId- Service类型为NOTEBOOK：  调用[DescribeNotebook接口](/document/product/851/95662)查询Notebook详情，ServiceId为接口返回值中Response.NotebookDetail.PodName- Service类型为INFER：  调用[DescribeModelServiceGroup接口](/document/product/851/82285)查询服务组详情，ServiceId为接口返回值中Response.ServiceGroup.Services.ServiceId- Service类型为BATCH：  调用[DescribeBatchTask接口](/document/product/851/80180)查询跑批任务详情，ServiceId为接口返回值中Response.BatchTaskDetail.LatestInstanceId
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置服务ID，和Service参数对应，不同Service的服务ID获取方式不同，具体如下：- Service类型为TRAIN：  调用[DescribeTrainingTask接口](/document/product/851/75089)查询训练任务详情，ServiceId为接口返回值中Response.TrainingTaskDetail.LatestInstanceId- Service类型为NOTEBOOK：  调用[DescribeNotebook接口](/document/product/851/95662)查询Notebook详情，ServiceId为接口返回值中Response.NotebookDetail.PodName- Service类型为INFER：  调用[DescribeModelServiceGroup接口](/document/product/851/82285)查询服务组详情，ServiceId为接口返回值中Response.ServiceGroup.Services.ServiceId- Service类型为BATCH：  调用[DescribeBatchTask接口](/document/product/851/80180)查询跑批任务详情，ServiceId为接口返回值中Response.BatchTaskDetail.LatestInstanceId
                     * @param _serviceId 服务ID，和Service参数对应，不同Service的服务ID获取方式不同，具体如下：- Service类型为TRAIN：  调用[DescribeTrainingTask接口](/document/product/851/75089)查询训练任务详情，ServiceId为接口返回值中Response.TrainingTaskDetail.LatestInstanceId- Service类型为NOTEBOOK：  调用[DescribeNotebook接口](/document/product/851/95662)查询Notebook详情，ServiceId为接口返回值中Response.NotebookDetail.PodName- Service类型为INFER：  调用[DescribeModelServiceGroup接口](/document/product/851/82285)查询服务组详情，ServiceId为接口返回值中Response.ServiceGroup.Services.ServiceId- Service类型为BATCH：  调用[DescribeBatchTask接口](/document/product/851/80180)查询跑批任务详情，ServiceId为接口返回值中Response.BatchTaskDetail.LatestInstanceId
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取日志查询开始时间（RFC3339格式的时间字符串），默认值为当前时间的前一个小时
                     * @return StartTime 日志查询开始时间（RFC3339格式的时间字符串），默认值为当前时间的前一个小时
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置日志查询开始时间（RFC3339格式的时间字符串），默认值为当前时间的前一个小时
                     * @param _startTime 日志查询开始时间（RFC3339格式的时间字符串），默认值为当前时间的前一个小时
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取日志查询结束时间（RFC3339格式的时间字符串），开始时间和结束时间必须同时填或同时不填，默认值为当前时间
                     * @return EndTime 日志查询结束时间（RFC3339格式的时间字符串），开始时间和结束时间必须同时填或同时不填，默认值为当前时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置日志查询结束时间（RFC3339格式的时间字符串），开始时间和结束时间必须同时填或同时不填，默认值为当前时间
                     * @param _endTime 日志查询结束时间（RFC3339格式的时间字符串），开始时间和结束时间必须同时填或同时不填，默认值为当前时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取日志导出数据格式。json，csv，默认为csv
                     * @return Format 日志导出数据格式。json，csv，默认为csv
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置日志导出数据格式。json，csv，默认为csv
                     * @param _format 日志导出数据格式。json，csv，默认为csv
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取Pod的名称，即需要查询服务对应的Pod，和Service参数对应，不同Service的PodName获取方式不同，具体如下：- Service类型为TRAIN：  调用[DescribeTrainingTaskPods接口](/document/product/851/75088)查询训练任务pod列表，PodName为接口返回值中Response.PodNames- Service类型为NOTEBOOK：  调用[DescribeNotebook接口](/document/product/851/95662)查询Notebook详情，PodName为接口返回值中Response.NotebookDetail.PodName- Service类型为INFER：  调用[DescribeModelService接口](/document/product/851/82287)查询单个服务详情，PodName为接口返回值中Response.Service.ServiceInfo.PodInfos- Service类型为BATCH：  调用[DescribeBatchTask接口](/document/product/851/80180)查询跑批任务详情，PodName为接口返回值中Response.BatchTaskDetail. PodList注：支持结尾通配符*
                     * @return PodName Pod的名称，即需要查询服务对应的Pod，和Service参数对应，不同Service的PodName获取方式不同，具体如下：- Service类型为TRAIN：  调用[DescribeTrainingTaskPods接口](/document/product/851/75088)查询训练任务pod列表，PodName为接口返回值中Response.PodNames- Service类型为NOTEBOOK：  调用[DescribeNotebook接口](/document/product/851/95662)查询Notebook详情，PodName为接口返回值中Response.NotebookDetail.PodName- Service类型为INFER：  调用[DescribeModelService接口](/document/product/851/82287)查询单个服务详情，PodName为接口返回值中Response.Service.ServiceInfo.PodInfos- Service类型为BATCH：  调用[DescribeBatchTask接口](/document/product/851/80180)查询跑批任务详情，PodName为接口返回值中Response.BatchTaskDetail. PodList注：支持结尾通配符*
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置Pod的名称，即需要查询服务对应的Pod，和Service参数对应，不同Service的PodName获取方式不同，具体如下：- Service类型为TRAIN：  调用[DescribeTrainingTaskPods接口](/document/product/851/75088)查询训练任务pod列表，PodName为接口返回值中Response.PodNames- Service类型为NOTEBOOK：  调用[DescribeNotebook接口](/document/product/851/95662)查询Notebook详情，PodName为接口返回值中Response.NotebookDetail.PodName- Service类型为INFER：  调用[DescribeModelService接口](/document/product/851/82287)查询单个服务详情，PodName为接口返回值中Response.Service.ServiceInfo.PodInfos- Service类型为BATCH：  调用[DescribeBatchTask接口](/document/product/851/80180)查询跑批任务详情，PodName为接口返回值中Response.BatchTaskDetail. PodList注：支持结尾通配符*
                     * @param _podName Pod的名称，即需要查询服务对应的Pod，和Service参数对应，不同Service的PodName获取方式不同，具体如下：- Service类型为TRAIN：  调用[DescribeTrainingTaskPods接口](/document/product/851/75088)查询训练任务pod列表，PodName为接口返回值中Response.PodNames- Service类型为NOTEBOOK：  调用[DescribeNotebook接口](/document/product/851/95662)查询Notebook详情，PodName为接口返回值中Response.NotebookDetail.PodName- Service类型为INFER：  调用[DescribeModelService接口](/document/product/851/82287)查询单个服务详情，PodName为接口返回值中Response.Service.ServiceInfo.PodInfos- Service类型为BATCH：  调用[DescribeBatchTask接口](/document/product/851/80180)查询跑批任务详情，PodName为接口返回值中Response.BatchTaskDetail. PodList注：支持结尾通配符*
                     * 
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     * 
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取描述任务的类型
                     * @return JobCategory 描述任务的类型
                     * 
                     */
                    std::string GetJobCategory() const;

                    /**
                     * 设置描述任务的类型
                     * @param _jobCategory 描述任务的类型
                     * 
                     */
                    void SetJobCategory(const std::string& _jobCategory);

                    /**
                     * 判断参数 JobCategory 是否已赋值
                     * @return JobCategory 是否已赋值
                     * 
                     */
                    bool JobCategoryHasBeenSet() const;

                    /**
                     * 获取实例的类型
                     * @return InstanceType 实例的类型
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例的类型
                     * @param _instanceType 实例的类型
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取查实例Id
                     * @return InstanceId 查实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置查实例Id
                     * @param _instanceId 查实例Id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取日志类型： PLATFORM_INIT, PLATFORM_SANITY_CHECK, USER
                     * @return Type 日志类型： PLATFORM_INIT, PLATFORM_SANITY_CHECK, USER
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置日志类型： PLATFORM_INIT, PLATFORM_SANITY_CHECK, USER
                     * @param _type 日志类型： PLATFORM_INIT, PLATFORM_SANITY_CHECK, USER
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 服务类型，TRAIN为任务式建模, NOTEBOOK为Notebook, INFER为在线服务, BATCH为批量预测枚举值：- TRAIN- NOTEBOOK- INFER- BATCH
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * 服务ID，和Service参数对应，不同Service的服务ID获取方式不同，具体如下：- Service类型为TRAIN：  调用[DescribeTrainingTask接口](/document/product/851/75089)查询训练任务详情，ServiceId为接口返回值中Response.TrainingTaskDetail.LatestInstanceId- Service类型为NOTEBOOK：  调用[DescribeNotebook接口](/document/product/851/95662)查询Notebook详情，ServiceId为接口返回值中Response.NotebookDetail.PodName- Service类型为INFER：  调用[DescribeModelServiceGroup接口](/document/product/851/82285)查询服务组详情，ServiceId为接口返回值中Response.ServiceGroup.Services.ServiceId- Service类型为BATCH：  调用[DescribeBatchTask接口](/document/product/851/80180)查询跑批任务详情，ServiceId为接口返回值中Response.BatchTaskDetail.LatestInstanceId
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 日志查询开始时间（RFC3339格式的时间字符串），默认值为当前时间的前一个小时
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 日志查询结束时间（RFC3339格式的时间字符串），开始时间和结束时间必须同时填或同时不填，默认值为当前时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 日志导出数据格式。json，csv，默认为csv
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * Pod的名称，即需要查询服务对应的Pod，和Service参数对应，不同Service的PodName获取方式不同，具体如下：- Service类型为TRAIN：  调用[DescribeTrainingTaskPods接口](/document/product/851/75088)查询训练任务pod列表，PodName为接口返回值中Response.PodNames- Service类型为NOTEBOOK：  调用[DescribeNotebook接口](/document/product/851/95662)查询Notebook详情，PodName为接口返回值中Response.NotebookDetail.PodName- Service类型为INFER：  调用[DescribeModelService接口](/document/product/851/82287)查询单个服务详情，PodName为接口返回值中Response.Service.ServiceInfo.PodInfos- Service类型为BATCH：  调用[DescribeBatchTask接口](/document/product/851/80180)查询跑批任务详情，PodName为接口返回值中Response.BatchTaskDetail. PodList注：支持结尾通配符*
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * 描述任务的类型
                     */
                    std::string m_jobCategory;
                    bool m_jobCategoryHasBeenSet;

                    /**
                     * 实例的类型
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 查实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 日志类型： PLATFORM_INIT, PLATFORM_SANITY_CHECK, USER
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_CREATEEXPORTREQUEST_H_
