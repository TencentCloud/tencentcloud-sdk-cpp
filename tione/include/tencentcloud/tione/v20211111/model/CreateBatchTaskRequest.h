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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_CREATEBATCHTASKREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_CREATEBATCHTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/ResourceConfigInfo.h>
#include <tencentcloud/tione/v20211111/model/DataConfig.h>
#include <tencentcloud/tione/v20211111/model/CronInfo.h>
#include <tencentcloud/tione/v20211111/model/Tag.h>
#include <tencentcloud/tione/v20211111/model/ModelInfo.h>
#include <tencentcloud/tione/v20211111/model/ImageInfo.h>
#include <tencentcloud/tione/v20211111/model/CosPathInfo.h>
#include <tencentcloud/tione/v20211111/model/LogConfig.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * CreateBatchTask请求参数结构体
                */
                class CreateBatchTaskRequest : public AbstractModel
                {
                public:
                    CreateBatchTaskRequest();
                    ~CreateBatchTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取跑批任务名称，不超过60个字符，仅支持中英文、数字、下划线"_"、短横"-"，只能以中英文、数字开头
                     * @return BatchTaskName 跑批任务名称，不超过60个字符，仅支持中英文、数字、下划线"_"、短横"-"，只能以中英文、数字开头
                     */
                    std::string GetBatchTaskName() const;

                    /**
                     * 设置跑批任务名称，不超过60个字符，仅支持中英文、数字、下划线"_"、短横"-"，只能以中英文、数字开头
                     * @param BatchTaskName 跑批任务名称，不超过60个字符，仅支持中英文、数字、下划线"_"、短横"-"，只能以中英文、数字开头
                     */
                    void SetBatchTaskName(const std::string& _batchTaskName);

                    /**
                     * 判断参数 BatchTaskName 是否已赋值
                     * @return BatchTaskName 是否已赋值
                     */
                    bool BatchTaskNameHasBeenSet() const;

                    /**
                     * 获取计费模式，eg：PREPAID 包年包月；POSTPAID_BY_HOUR 按量计费
                     * @return ChargeType 计费模式，eg：PREPAID 包年包月；POSTPAID_BY_HOUR 按量计费
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置计费模式，eg：PREPAID 包年包月；POSTPAID_BY_HOUR 按量计费
                     * @param ChargeType 计费模式，eg：PREPAID 包年包月；POSTPAID_BY_HOUR 按量计费
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取资源配置
                     * @return ResourceConfigInfo 资源配置
                     */
                    ResourceConfigInfo GetResourceConfigInfo() const;

                    /**
                     * 设置资源配置
                     * @param ResourceConfigInfo 资源配置
                     */
                    void SetResourceConfigInfo(const ResourceConfigInfo& _resourceConfigInfo);

                    /**
                     * 判断参数 ResourceConfigInfo 是否已赋值
                     * @return ResourceConfigInfo 是否已赋值
                     */
                    bool ResourceConfigInfoHasBeenSet() const;

                    /**
                     * 获取结果输出
                     * @return Outputs 结果输出
                     */
                    std::vector<DataConfig> GetOutputs() const;

                    /**
                     * 设置结果输出
                     * @param Outputs 结果输出
                     */
                    void SetOutputs(const std::vector<DataConfig>& _outputs);

                    /**
                     * 判断参数 Outputs 是否已赋值
                     * @return Outputs 是否已赋值
                     */
                    bool OutputsHasBeenSet() const;

                    /**
                     * 获取是否上报日志
                     * @return LogEnable 是否上报日志
                     */
                    bool GetLogEnable() const;

                    /**
                     * 设置是否上报日志
                     * @param LogEnable 是否上报日志
                     */
                    void SetLogEnable(const bool& _logEnable);

                    /**
                     * 判断参数 LogEnable 是否已赋值
                     * @return LogEnable 是否已赋值
                     */
                    bool LogEnableHasBeenSet() const;

                    /**
                     * 获取工作类型 1:单次 2:周期
                     * @return JobType 工作类型 1:单次 2:周期
                     */
                    uint64_t GetJobType() const;

                    /**
                     * 设置工作类型 1:单次 2:周期
                     * @param JobType 工作类型 1:单次 2:周期
                     */
                    void SetJobType(const uint64_t& _jobType);

                    /**
                     * 判断参数 JobType 是否已赋值
                     * @return JobType 是否已赋值
                     */
                    bool JobTypeHasBeenSet() const;

                    /**
                     * 获取任务周期描述
                     * @return CronInfo 任务周期描述
                     */
                    CronInfo GetCronInfo() const;

                    /**
                     * 设置任务周期描述
                     * @param CronInfo 任务周期描述
                     */
                    void SetCronInfo(const CronInfo& _cronInfo);

                    /**
                     * 判断参数 CronInfo 是否已赋值
                     * @return CronInfo 是否已赋值
                     */
                    bool CronInfoHasBeenSet() const;

                    /**
                     * 获取包年包月资源组ID
                     * @return ResourceGroupId 包年包月资源组ID
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置包年包月资源组ID
                     * @param ResourceGroupId 包年包月资源组ID
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取标签配置
                     * @return Tags 标签配置
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签配置
                     * @param Tags 标签配置
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取服务对应的模型信息，有模型文件时需要填写
                     * @return ModelInfo 服务对应的模型信息，有模型文件时需要填写
                     */
                    ModelInfo GetModelInfo() const;

                    /**
                     * 设置服务对应的模型信息，有模型文件时需要填写
                     * @param ModelInfo 服务对应的模型信息，有模型文件时需要填写
                     */
                    void SetModelInfo(const ModelInfo& _modelInfo);

                    /**
                     * 判断参数 ModelInfo 是否已赋值
                     * @return ModelInfo 是否已赋值
                     */
                    bool ModelInfoHasBeenSet() const;

                    /**
                     * 获取自定义镜像信息
                     * @return ImageInfo 自定义镜像信息
                     */
                    ImageInfo GetImageInfo() const;

                    /**
                     * 设置自定义镜像信息
                     * @param ImageInfo 自定义镜像信息
                     */
                    void SetImageInfo(const ImageInfo& _imageInfo);

                    /**
                     * 判断参数 ImageInfo 是否已赋值
                     * @return ImageInfo 是否已赋值
                     */
                    bool ImageInfoHasBeenSet() const;

                    /**
                     * 获取代码包
                     * @return CodePackage 代码包
                     */
                    CosPathInfo GetCodePackage() const;

                    /**
                     * 设置代码包
                     * @param CodePackage 代码包
                     */
                    void SetCodePackage(const CosPathInfo& _codePackage);

                    /**
                     * 判断参数 CodePackage 是否已赋值
                     * @return CodePackage 是否已赋值
                     */
                    bool CodePackageHasBeenSet() const;

                    /**
                     * 获取启动命令
                     * @return StartCmd 启动命令
                     */
                    std::string GetStartCmd() const;

                    /**
                     * 设置启动命令
                     * @param StartCmd 启动命令
                     */
                    void SetStartCmd(const std::string& _startCmd);

                    /**
                     * 判断参数 StartCmd 是否已赋值
                     * @return StartCmd 是否已赋值
                     */
                    bool StartCmdHasBeenSet() const;

                    /**
                     * 获取数据配置
                     * @return DataConfigs 数据配置
                     */
                    std::vector<DataConfig> GetDataConfigs() const;

                    /**
                     * 设置数据配置
                     * @param DataConfigs 数据配置
                     */
                    void SetDataConfigs(const std::vector<DataConfig>& _dataConfigs);

                    /**
                     * 判断参数 DataConfigs 是否已赋值
                     * @return DataConfigs 是否已赋值
                     */
                    bool DataConfigsHasBeenSet() const;

                    /**
                     * 获取日志配置
                     * @return LogConfig 日志配置
                     */
                    LogConfig GetLogConfig() const;

                    /**
                     * 设置日志配置
                     * @param LogConfig 日志配置
                     */
                    void SetLogConfig(const LogConfig& _logConfig);

                    /**
                     * 判断参数 LogConfig 是否已赋值
                     * @return LogConfig 是否已赋值
                     */
                    bool LogConfigHasBeenSet() const;

                    /**
                     * 获取VPC Id
                     * @return VpcId VPC Id
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC Id
                     * @param VpcId VPC Id
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网Id
                     * @return SubnetId 子网Id
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网Id
                     * @param SubnetId 子网Id
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param Remark 备注
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取任务执行结果回调URL，仅支持http和https。回调格式&内容详见: [TI-ONE 接口回调说明](https://cloud.tencent.com/document/product/851/84292)
                     * @return CallbackUrl 任务执行结果回调URL，仅支持http和https。回调格式&内容详见: [TI-ONE 接口回调说明](https://cloud.tencent.com/document/product/851/84292)
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置任务执行结果回调URL，仅支持http和https。回调格式&内容详见: [TI-ONE 接口回调说明](https://cloud.tencent.com/document/product/851/84292)
                     * @param CallbackUrl 任务执行结果回调URL，仅支持http和https。回调格式&内容详见: [TI-ONE 接口回调说明](https://cloud.tencent.com/document/product/851/84292)
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     */
                    bool CallbackUrlHasBeenSet() const;

                private:

                    /**
                     * 跑批任务名称，不超过60个字符，仅支持中英文、数字、下划线"_"、短横"-"，只能以中英文、数字开头
                     */
                    std::string m_batchTaskName;
                    bool m_batchTaskNameHasBeenSet;

                    /**
                     * 计费模式，eg：PREPAID 包年包月；POSTPAID_BY_HOUR 按量计费
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 资源配置
                     */
                    ResourceConfigInfo m_resourceConfigInfo;
                    bool m_resourceConfigInfoHasBeenSet;

                    /**
                     * 结果输出
                     */
                    std::vector<DataConfig> m_outputs;
                    bool m_outputsHasBeenSet;

                    /**
                     * 是否上报日志
                     */
                    bool m_logEnable;
                    bool m_logEnableHasBeenSet;

                    /**
                     * 工作类型 1:单次 2:周期
                     */
                    uint64_t m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * 任务周期描述
                     */
                    CronInfo m_cronInfo;
                    bool m_cronInfoHasBeenSet;

                    /**
                     * 包年包月资源组ID
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * 标签配置
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 服务对应的模型信息，有模型文件时需要填写
                     */
                    ModelInfo m_modelInfo;
                    bool m_modelInfoHasBeenSet;

                    /**
                     * 自定义镜像信息
                     */
                    ImageInfo m_imageInfo;
                    bool m_imageInfoHasBeenSet;

                    /**
                     * 代码包
                     */
                    CosPathInfo m_codePackage;
                    bool m_codePackageHasBeenSet;

                    /**
                     * 启动命令
                     */
                    std::string m_startCmd;
                    bool m_startCmdHasBeenSet;

                    /**
                     * 数据配置
                     */
                    std::vector<DataConfig> m_dataConfigs;
                    bool m_dataConfigsHasBeenSet;

                    /**
                     * 日志配置
                     */
                    LogConfig m_logConfig;
                    bool m_logConfigHasBeenSet;

                    /**
                     * VPC Id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网Id
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 任务执行结果回调URL，仅支持http和https。回调格式&内容详见: [TI-ONE 接口回调说明](https://cloud.tencent.com/document/product/851/84292)
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_CREATEBATCHTASKREQUEST_H_
