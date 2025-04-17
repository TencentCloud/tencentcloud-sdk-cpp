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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_CREATETRAININGTASKREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_CREATETRAININGTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/ResourceConfigInfo.h>
#include <tencentcloud/tione/v20211111/model/Tag.h>
#include <tencentcloud/tione/v20211111/model/ImageInfo.h>
#include <tencentcloud/tione/v20211111/model/CosPathInfo.h>
#include <tencentcloud/tione/v20211111/model/StartCmdInfo.h>
#include <tencentcloud/tione/v20211111/model/DataConfig.h>
#include <tencentcloud/tione/v20211111/model/LogConfig.h>
#include <tencentcloud/tione/v20211111/model/EncodedStartCmdInfo.h>
#include <tencentcloud/tione/v20211111/model/CodeRepoConfig.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * CreateTrainingTask请求参数结构体
                */
                class CreateTrainingTaskRequest : public AbstractModel
                {
                public:
                    CreateTrainingTaskRequest();
                    ~CreateTrainingTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取训练任务名称，不超过60个字符，仅支持中英文、数字、下划线"_"、短横"-"，只能以中英文、数字开头
                     * @return Name 训练任务名称，不超过60个字符，仅支持中英文、数字、下划线"_"、短横"-"，只能以中英文、数字开头
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置训练任务名称，不超过60个字符，仅支持中英文、数字、下划线"_"、短横"-"，只能以中英文、数字开头
                     * @param _name 训练任务名称，不超过60个字符，仅支持中英文、数字、下划线"_"、短横"-"，只能以中英文、数字开头
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
                     * 获取计费模式，eg：PREPAID 包年包月（资源组）;
POSTPAID_BY_HOUR 按量计费
                     * @return ChargeType 计费模式，eg：PREPAID 包年包月（资源组）;
POSTPAID_BY_HOUR 按量计费
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置计费模式，eg：PREPAID 包年包月（资源组）;
POSTPAID_BY_HOUR 按量计费
                     * @param _chargeType 计费模式，eg：PREPAID 包年包月（资源组）;
POSTPAID_BY_HOUR 按量计费
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取资源配置，需填写对应算力规格ID和节点数量，算力规格ID查询接口为DescribeBillingSpecsPrice，eg：[{"Role":"WORKER", "InstanceType": "TI.S.MEDIUM.POST", "InstanceNum": 1}]
                     * @return ResourceConfigInfos 资源配置，需填写对应算力规格ID和节点数量，算力规格ID查询接口为DescribeBillingSpecsPrice，eg：[{"Role":"WORKER", "InstanceType": "TI.S.MEDIUM.POST", "InstanceNum": 1}]
                     * 
                     */
                    std::vector<ResourceConfigInfo> GetResourceConfigInfos() const;

                    /**
                     * 设置资源配置，需填写对应算力规格ID和节点数量，算力规格ID查询接口为DescribeBillingSpecsPrice，eg：[{"Role":"WORKER", "InstanceType": "TI.S.MEDIUM.POST", "InstanceNum": 1}]
                     * @param _resourceConfigInfos 资源配置，需填写对应算力规格ID和节点数量，算力规格ID查询接口为DescribeBillingSpecsPrice，eg：[{"Role":"WORKER", "InstanceType": "TI.S.MEDIUM.POST", "InstanceNum": 1}]
                     * 
                     */
                    void SetResourceConfigInfos(const std::vector<ResourceConfigInfo>& _resourceConfigInfos);

                    /**
                     * 判断参数 ResourceConfigInfos 是否已赋值
                     * @return ResourceConfigInfos 是否已赋值
                     * 
                     */
                    bool ResourceConfigInfosHasBeenSet() const;

                    /**
                     * 获取训练框架名称，通过DescribeTrainingFrameworks接口查询，eg：SPARK、PYSPARK、TENSORFLOW、PYTORCH
                     * @return FrameworkName 训练框架名称，通过DescribeTrainingFrameworks接口查询，eg：SPARK、PYSPARK、TENSORFLOW、PYTORCH
                     * 
                     */
                    std::string GetFrameworkName() const;

                    /**
                     * 设置训练框架名称，通过DescribeTrainingFrameworks接口查询，eg：SPARK、PYSPARK、TENSORFLOW、PYTORCH
                     * @param _frameworkName 训练框架名称，通过DescribeTrainingFrameworks接口查询，eg：SPARK、PYSPARK、TENSORFLOW、PYTORCH
                     * 
                     */
                    void SetFrameworkName(const std::string& _frameworkName);

                    /**
                     * 判断参数 FrameworkName 是否已赋值
                     * @return FrameworkName 是否已赋值
                     * 
                     */
                    bool FrameworkNameHasBeenSet() const;

                    /**
                     * 获取训练框架版本，通过DescribeTrainingFrameworks接口查询，eg：1.15、1.9
                     * @return FrameworkVersion 训练框架版本，通过DescribeTrainingFrameworks接口查询，eg：1.15、1.9
                     * 
                     */
                    std::string GetFrameworkVersion() const;

                    /**
                     * 设置训练框架版本，通过DescribeTrainingFrameworks接口查询，eg：1.15、1.9
                     * @param _frameworkVersion 训练框架版本，通过DescribeTrainingFrameworks接口查询，eg：1.15、1.9
                     * 
                     */
                    void SetFrameworkVersion(const std::string& _frameworkVersion);

                    /**
                     * 判断参数 FrameworkVersion 是否已赋值
                     * @return FrameworkVersion 是否已赋值
                     * 
                     */
                    bool FrameworkVersionHasBeenSet() const;

                    /**
                     * 获取训练框架环境，通过DescribeTrainingFrameworks接口查询，eg：tf1.15-py3.7-cpu、torch1.9-py3.8-cuda11.1-gpu
                     * @return FrameworkEnvironment 训练框架环境，通过DescribeTrainingFrameworks接口查询，eg：tf1.15-py3.7-cpu、torch1.9-py3.8-cuda11.1-gpu
                     * 
                     */
                    std::string GetFrameworkEnvironment() const;

                    /**
                     * 设置训练框架环境，通过DescribeTrainingFrameworks接口查询，eg：tf1.15-py3.7-cpu、torch1.9-py3.8-cuda11.1-gpu
                     * @param _frameworkEnvironment 训练框架环境，通过DescribeTrainingFrameworks接口查询，eg：tf1.15-py3.7-cpu、torch1.9-py3.8-cuda11.1-gpu
                     * 
                     */
                    void SetFrameworkEnvironment(const std::string& _frameworkEnvironment);

                    /**
                     * 判断参数 FrameworkEnvironment 是否已赋值
                     * @return FrameworkEnvironment 是否已赋值
                     * 
                     */
                    bool FrameworkEnvironmentHasBeenSet() const;

                    /**
                     * 获取预付费专用资源组ID，通过DescribeBillingResourceGroups接口查询
                     * @return ResourceGroupId 预付费专用资源组ID，通过DescribeBillingResourceGroups接口查询
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置预付费专用资源组ID，通过DescribeBillingResourceGroups接口查询
                     * @param _resourceGroupId 预付费专用资源组ID，通过DescribeBillingResourceGroups接口查询
                     * 
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取标签配置
                     * @return Tags 标签配置
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签配置
                     * @param _tags 标签配置
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取自定义镜像信息
                     * @return ImageInfo 自定义镜像信息
                     * 
                     */
                    ImageInfo GetImageInfo() const;

                    /**
                     * 设置自定义镜像信息
                     * @param _imageInfo 自定义镜像信息
                     * 
                     */
                    void SetImageInfo(const ImageInfo& _imageInfo);

                    /**
                     * 判断参数 ImageInfo 是否已赋值
                     * @return ImageInfo 是否已赋值
                     * 
                     */
                    bool ImageInfoHasBeenSet() const;

                    /**
                     * 获取COS代码包路径
                     * @return CodePackagePath COS代码包路径
                     * 
                     */
                    CosPathInfo GetCodePackagePath() const;

                    /**
                     * 设置COS代码包路径
                     * @param _codePackagePath COS代码包路径
                     * 
                     */
                    void SetCodePackagePath(const CosPathInfo& _codePackagePath);

                    /**
                     * 判断参数 CodePackagePath 是否已赋值
                     * @return CodePackagePath 是否已赋值
                     * 
                     */
                    bool CodePackagePathHasBeenSet() const;

                    /**
                     * 获取任务的启动命令，按任务训练模式输入，如遇特殊字符导致配置失败，可使用EncodedStartCmdInfo参数
                     * @return StartCmdInfo 任务的启动命令，按任务训练模式输入，如遇特殊字符导致配置失败，可使用EncodedStartCmdInfo参数
                     * 
                     */
                    StartCmdInfo GetStartCmdInfo() const;

                    /**
                     * 设置任务的启动命令，按任务训练模式输入，如遇特殊字符导致配置失败，可使用EncodedStartCmdInfo参数
                     * @param _startCmdInfo 任务的启动命令，按任务训练模式输入，如遇特殊字符导致配置失败，可使用EncodedStartCmdInfo参数
                     * 
                     */
                    void SetStartCmdInfo(const StartCmdInfo& _startCmdInfo);

                    /**
                     * 判断参数 StartCmdInfo 是否已赋值
                     * @return StartCmdInfo 是否已赋值
                     * 
                     */
                    bool StartCmdInfoHasBeenSet() const;

                    /**
                     * 获取训练模式，通过DescribeTrainingFrameworks接口查询，eg：PS_WORKER、DDP、MPI、HOROVOD
                     * @return TrainingMode 训练模式，通过DescribeTrainingFrameworks接口查询，eg：PS_WORKER、DDP、MPI、HOROVOD
                     * 
                     */
                    std::string GetTrainingMode() const;

                    /**
                     * 设置训练模式，通过DescribeTrainingFrameworks接口查询，eg：PS_WORKER、DDP、MPI、HOROVOD
                     * @param _trainingMode 训练模式，通过DescribeTrainingFrameworks接口查询，eg：PS_WORKER、DDP、MPI、HOROVOD
                     * 
                     */
                    void SetTrainingMode(const std::string& _trainingMode);

                    /**
                     * 判断参数 TrainingMode 是否已赋值
                     * @return TrainingMode 是否已赋值
                     * 
                     */
                    bool TrainingModeHasBeenSet() const;

                    /**
                     * 获取数据配置，依赖DataSource字段，数量不超过10个
                     * @return DataConfigs 数据配置，依赖DataSource字段，数量不超过10个
                     * 
                     */
                    std::vector<DataConfig> GetDataConfigs() const;

                    /**
                     * 设置数据配置，依赖DataSource字段，数量不超过10个
                     * @param _dataConfigs 数据配置，依赖DataSource字段，数量不超过10个
                     * 
                     */
                    void SetDataConfigs(const std::vector<DataConfig>& _dataConfigs);

                    /**
                     * 判断参数 DataConfigs 是否已赋值
                     * @return DataConfigs 是否已赋值
                     * 
                     */
                    bool DataConfigsHasBeenSet() const;

                    /**
                     * 获取VPC Id
                     * @return VpcId VPC Id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC Id
                     * @param _vpcId VPC Id
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网Id
                     * @return SubnetId 子网Id
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网Id
                     * @param _subnetId 子网Id
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取COS训练输出路径
                     * @return Output COS训练输出路径
                     * 
                     */
                    CosPathInfo GetOutput() const;

                    /**
                     * 设置COS训练输出路径
                     * @param _output COS训练输出路径
                     * 
                     */
                    void SetOutput(const CosPathInfo& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取CLS日志配置
                     * @return LogConfig CLS日志配置
                     * 
                     */
                    LogConfig GetLogConfig() const;

                    /**
                     * 设置CLS日志配置
                     * @param _logConfig CLS日志配置
                     * 
                     */
                    void SetLogConfig(const LogConfig& _logConfig);

                    /**
                     * 判断参数 LogConfig 是否已赋值
                     * @return LogConfig 是否已赋值
                     * 
                     */
                    bool LogConfigHasBeenSet() const;

                    /**
                     * 获取调优参数，不超过2048个字符
                     * @return TuningParameters 调优参数，不超过2048个字符
                     * 
                     */
                    std::string GetTuningParameters() const;

                    /**
                     * 设置调优参数，不超过2048个字符
                     * @param _tuningParameters 调优参数，不超过2048个字符
                     * 
                     */
                    void SetTuningParameters(const std::string& _tuningParameters);

                    /**
                     * 判断参数 TuningParameters 是否已赋值
                     * @return TuningParameters 是否已赋值
                     * 
                     */
                    bool TuningParametersHasBeenSet() const;

                    /**
                     * 获取是否上报日志
                     * @return LogEnable 是否上报日志
                     * 
                     */
                    bool GetLogEnable() const;

                    /**
                     * 设置是否上报日志
                     * @param _logEnable 是否上报日志
                     * 
                     */
                    void SetLogEnable(const bool& _logEnable);

                    /**
                     * 判断参数 LogEnable 是否已赋值
                     * @return LogEnable 是否已赋值
                     * 
                     */
                    bool LogEnableHasBeenSet() const;

                    /**
                     * 获取备注，不超过1024个字符
                     * @return Remark 备注，不超过1024个字符
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注，不超过1024个字符
                     * @param _remark 备注，不超过1024个字符
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取数据来源，eg：DATASET、COS、CFS、CFSTurbo、HDFS、GooseFSx
                     * @return DataSource 数据来源，eg：DATASET、COS、CFS、CFSTurbo、HDFS、GooseFSx
                     * 
                     */
                    std::string GetDataSource() const;

                    /**
                     * 设置数据来源，eg：DATASET、COS、CFS、CFSTurbo、HDFS、GooseFSx
                     * @param _dataSource 数据来源，eg：DATASET、COS、CFS、CFSTurbo、HDFS、GooseFSx
                     * 
                     */
                    void SetDataSource(const std::string& _dataSource);

                    /**
                     * 判断参数 DataSource 是否已赋值
                     * @return DataSource 是否已赋值
                     * 
                     */
                    bool DataSourceHasBeenSet() const;

                    /**
                     * 获取回调地址，用于创建/启动/停止训练任务的异步回调。回调格式&内容详见：[[TI-ONE接口回调说明]](https://cloud.tencent.com/document/product/851/84292)
                     * @return CallbackUrl 回调地址，用于创建/启动/停止训练任务的异步回调。回调格式&内容详见：[[TI-ONE接口回调说明]](https://cloud.tencent.com/document/product/851/84292)
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置回调地址，用于创建/启动/停止训练任务的异步回调。回调格式&内容详见：[[TI-ONE接口回调说明]](https://cloud.tencent.com/document/product/851/84292)
                     * @param _callbackUrl 回调地址，用于创建/启动/停止训练任务的异步回调。回调格式&内容详见：[[TI-ONE接口回调说明]](https://cloud.tencent.com/document/product/851/84292)
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取编码后的任务启动命令，与StartCmdInfo同时配置时，仅当前参数生效
                     * @return EncodedStartCmdInfo 编码后的任务启动命令，与StartCmdInfo同时配置时，仅当前参数生效
                     * 
                     */
                    EncodedStartCmdInfo GetEncodedStartCmdInfo() const;

                    /**
                     * 设置编码后的任务启动命令，与StartCmdInfo同时配置时，仅当前参数生效
                     * @param _encodedStartCmdInfo 编码后的任务启动命令，与StartCmdInfo同时配置时，仅当前参数生效
                     * 
                     */
                    void SetEncodedStartCmdInfo(const EncodedStartCmdInfo& _encodedStartCmdInfo);

                    /**
                     * 判断参数 EncodedStartCmdInfo 是否已赋值
                     * @return EncodedStartCmdInfo 是否已赋值
                     * 
                     */
                    bool EncodedStartCmdInfoHasBeenSet() const;

                    /**
                     * 获取代码仓库配置
                     * @return CodeRepos 代码仓库配置
                     * 
                     */
                    std::vector<CodeRepoConfig> GetCodeRepos() const;

                    /**
                     * 设置代码仓库配置
                     * @param _codeRepos 代码仓库配置
                     * 
                     */
                    void SetCodeRepos(const std::vector<CodeRepoConfig>& _codeRepos);

                    /**
                     * 判断参数 CodeRepos 是否已赋值
                     * @return CodeRepos 是否已赋值
                     * 
                     */
                    bool CodeReposHasBeenSet() const;

                private:

                    /**
                     * 训练任务名称，不超过60个字符，仅支持中英文、数字、下划线"_"、短横"-"，只能以中英文、数字开头
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 计费模式，eg：PREPAID 包年包月（资源组）;
POSTPAID_BY_HOUR 按量计费
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 资源配置，需填写对应算力规格ID和节点数量，算力规格ID查询接口为DescribeBillingSpecsPrice，eg：[{"Role":"WORKER", "InstanceType": "TI.S.MEDIUM.POST", "InstanceNum": 1}]
                     */
                    std::vector<ResourceConfigInfo> m_resourceConfigInfos;
                    bool m_resourceConfigInfosHasBeenSet;

                    /**
                     * 训练框架名称，通过DescribeTrainingFrameworks接口查询，eg：SPARK、PYSPARK、TENSORFLOW、PYTORCH
                     */
                    std::string m_frameworkName;
                    bool m_frameworkNameHasBeenSet;

                    /**
                     * 训练框架版本，通过DescribeTrainingFrameworks接口查询，eg：1.15、1.9
                     */
                    std::string m_frameworkVersion;
                    bool m_frameworkVersionHasBeenSet;

                    /**
                     * 训练框架环境，通过DescribeTrainingFrameworks接口查询，eg：tf1.15-py3.7-cpu、torch1.9-py3.8-cuda11.1-gpu
                     */
                    std::string m_frameworkEnvironment;
                    bool m_frameworkEnvironmentHasBeenSet;

                    /**
                     * 预付费专用资源组ID，通过DescribeBillingResourceGroups接口查询
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * 标签配置
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 自定义镜像信息
                     */
                    ImageInfo m_imageInfo;
                    bool m_imageInfoHasBeenSet;

                    /**
                     * COS代码包路径
                     */
                    CosPathInfo m_codePackagePath;
                    bool m_codePackagePathHasBeenSet;

                    /**
                     * 任务的启动命令，按任务训练模式输入，如遇特殊字符导致配置失败，可使用EncodedStartCmdInfo参数
                     */
                    StartCmdInfo m_startCmdInfo;
                    bool m_startCmdInfoHasBeenSet;

                    /**
                     * 训练模式，通过DescribeTrainingFrameworks接口查询，eg：PS_WORKER、DDP、MPI、HOROVOD
                     */
                    std::string m_trainingMode;
                    bool m_trainingModeHasBeenSet;

                    /**
                     * 数据配置，依赖DataSource字段，数量不超过10个
                     */
                    std::vector<DataConfig> m_dataConfigs;
                    bool m_dataConfigsHasBeenSet;

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
                     * COS训练输出路径
                     */
                    CosPathInfo m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * CLS日志配置
                     */
                    LogConfig m_logConfig;
                    bool m_logConfigHasBeenSet;

                    /**
                     * 调优参数，不超过2048个字符
                     */
                    std::string m_tuningParameters;
                    bool m_tuningParametersHasBeenSet;

                    /**
                     * 是否上报日志
                     */
                    bool m_logEnable;
                    bool m_logEnableHasBeenSet;

                    /**
                     * 备注，不超过1024个字符
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 数据来源，eg：DATASET、COS、CFS、CFSTurbo、HDFS、GooseFSx
                     */
                    std::string m_dataSource;
                    bool m_dataSourceHasBeenSet;

                    /**
                     * 回调地址，用于创建/启动/停止训练任务的异步回调。回调格式&内容详见：[[TI-ONE接口回调说明]](https://cloud.tencent.com/document/product/851/84292)
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 编码后的任务启动命令，与StartCmdInfo同时配置时，仅当前参数生效
                     */
                    EncodedStartCmdInfo m_encodedStartCmdInfo;
                    bool m_encodedStartCmdInfoHasBeenSet;

                    /**
                     * 代码仓库配置
                     */
                    std::vector<CodeRepoConfig> m_codeRepos;
                    bool m_codeReposHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_CREATETRAININGTASKREQUEST_H_
