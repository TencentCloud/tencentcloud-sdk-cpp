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
#include <tencentcloud/tione/v20211111/model/ExposeNetworkConfig.h>
#include <tencentcloud/tione/v20211111/model/EnvVar.h>


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
                     * 获取<p>训练任务名称，不超过60个字符，仅支持中英文、数字、下划线&quot;_&quot;、短横&quot;-&quot;，只能以中英文、数字开头</p>
                     * @return Name <p>训练任务名称，不超过60个字符，仅支持中英文、数字、下划线&quot;_&quot;、短横&quot;-&quot;，只能以中英文、数字开头</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>训练任务名称，不超过60个字符，仅支持中英文、数字、下划线&quot;_&quot;、短横&quot;-&quot;，只能以中英文、数字开头</p>
                     * @param _name <p>训练任务名称，不超过60个字符，仅支持中英文、数字、下划线&quot;_&quot;、短横&quot;-&quot;，只能以中英文、数字开头</p>
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
                     * 获取<p>计费模式，eg：PREPAID 包年包月（资源组）;<br>POSTPAID_BY_HOUR 按量计费</p>
                     * @return ChargeType <p>计费模式，eg：PREPAID 包年包月（资源组）;<br>POSTPAID_BY_HOUR 按量计费</p>
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置<p>计费模式，eg：PREPAID 包年包月（资源组）;<br>POSTPAID_BY_HOUR 按量计费</p>
                     * @param _chargeType <p>计费模式，eg：PREPAID 包年包月（资源组）;<br>POSTPAID_BY_HOUR 按量计费</p>
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
                     * 获取<p>资源配置，需填写对应算力规格ID和节点数量，算力规格ID查询接口为DescribeBillingSpecsPrice，eg：[{&quot;Role&quot;:&quot;WORKER&quot;, &quot;InstanceType&quot;: &quot;TI.S.MEDIUM.POST&quot;, &quot;InstanceNum&quot;: 1}]</p>
                     * @return ResourceConfigInfos <p>资源配置，需填写对应算力规格ID和节点数量，算力规格ID查询接口为DescribeBillingSpecsPrice，eg：[{&quot;Role&quot;:&quot;WORKER&quot;, &quot;InstanceType&quot;: &quot;TI.S.MEDIUM.POST&quot;, &quot;InstanceNum&quot;: 1}]</p>
                     * 
                     */
                    std::vector<ResourceConfigInfo> GetResourceConfigInfos() const;

                    /**
                     * 设置<p>资源配置，需填写对应算力规格ID和节点数量，算力规格ID查询接口为DescribeBillingSpecsPrice，eg：[{&quot;Role&quot;:&quot;WORKER&quot;, &quot;InstanceType&quot;: &quot;TI.S.MEDIUM.POST&quot;, &quot;InstanceNum&quot;: 1}]</p>
                     * @param _resourceConfigInfos <p>资源配置，需填写对应算力规格ID和节点数量，算力规格ID查询接口为DescribeBillingSpecsPrice，eg：[{&quot;Role&quot;:&quot;WORKER&quot;, &quot;InstanceType&quot;: &quot;TI.S.MEDIUM.POST&quot;, &quot;InstanceNum&quot;: 1}]</p>
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
                     * 获取<p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     * @return TiProjectId <p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     * 
                     */
                    std::string GetTiProjectId() const;

                    /**
                     * 设置<p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     * @param _tiProjectId <p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     * 
                     */
                    void SetTiProjectId(const std::string& _tiProjectId);

                    /**
                     * 判断参数 TiProjectId 是否已赋值
                     * @return TiProjectId 是否已赋值
                     * 
                     */
                    bool TiProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>训练框架名称，通过DescribeTrainingFrameworks接口查询，eg：SPARK、PYSPARK、TENSORFLOW、PYTORCH</p>
                     * @return FrameworkName <p>训练框架名称，通过DescribeTrainingFrameworks接口查询，eg：SPARK、PYSPARK、TENSORFLOW、PYTORCH</p>
                     * 
                     */
                    std::string GetFrameworkName() const;

                    /**
                     * 设置<p>训练框架名称，通过DescribeTrainingFrameworks接口查询，eg：SPARK、PYSPARK、TENSORFLOW、PYTORCH</p>
                     * @param _frameworkName <p>训练框架名称，通过DescribeTrainingFrameworks接口查询，eg：SPARK、PYSPARK、TENSORFLOW、PYTORCH</p>
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
                     * 获取<p>训练框架版本，通过DescribeTrainingFrameworks接口查询，eg：1.15、1.9</p>
                     * @return FrameworkVersion <p>训练框架版本，通过DescribeTrainingFrameworks接口查询，eg：1.15、1.9</p>
                     * 
                     */
                    std::string GetFrameworkVersion() const;

                    /**
                     * 设置<p>训练框架版本，通过DescribeTrainingFrameworks接口查询，eg：1.15、1.9</p>
                     * @param _frameworkVersion <p>训练框架版本，通过DescribeTrainingFrameworks接口查询，eg：1.15、1.9</p>
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
                     * 获取<p>训练框架环境，通过DescribeTrainingFrameworks接口查询，eg：tf1.15-py3.7-cpu、torch1.9-py3.8-cuda11.1-gpu</p>
                     * @return FrameworkEnvironment <p>训练框架环境，通过DescribeTrainingFrameworks接口查询，eg：tf1.15-py3.7-cpu、torch1.9-py3.8-cuda11.1-gpu</p>
                     * 
                     */
                    std::string GetFrameworkEnvironment() const;

                    /**
                     * 设置<p>训练框架环境，通过DescribeTrainingFrameworks接口查询，eg：tf1.15-py3.7-cpu、torch1.9-py3.8-cuda11.1-gpu</p>
                     * @param _frameworkEnvironment <p>训练框架环境，通过DescribeTrainingFrameworks接口查询，eg：tf1.15-py3.7-cpu、torch1.9-py3.8-cuda11.1-gpu</p>
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
                     * 获取<p>预付费专用资源组ID，通过DescribeBillingResourceGroups接口查询</p>
                     * @return ResourceGroupId <p>预付费专用资源组ID，通过DescribeBillingResourceGroups接口查询</p>
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置<p>预付费专用资源组ID，通过DescribeBillingResourceGroups接口查询</p>
                     * @param _resourceGroupId <p>预付费专用资源组ID，通过DescribeBillingResourceGroups接口查询</p>
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
                     * 获取<p>标签配置</p>
                     * @return Tags <p>标签配置</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签配置</p>
                     * @param _tags <p>标签配置</p>
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
                     * 获取<p>自定义镜像信息</p>
                     * @return ImageInfo <p>自定义镜像信息</p>
                     * 
                     */
                    ImageInfo GetImageInfo() const;

                    /**
                     * 设置<p>自定义镜像信息</p>
                     * @param _imageInfo <p>自定义镜像信息</p>
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
                     * 获取<p>COS代码包路径</p>
                     * @return CodePackagePath <p>COS代码包路径</p>
                     * 
                     */
                    CosPathInfo GetCodePackagePath() const;

                    /**
                     * 设置<p>COS代码包路径</p>
                     * @param _codePackagePath <p>COS代码包路径</p>
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
                     * 获取<p>任务的启动命令，按任务训练模式输入，如遇特殊字符导致配置失败，可使用EncodedStartCmdInfo参数</p>
                     * @return StartCmdInfo <p>任务的启动命令，按任务训练模式输入，如遇特殊字符导致配置失败，可使用EncodedStartCmdInfo参数</p>
                     * 
                     */
                    StartCmdInfo GetStartCmdInfo() const;

                    /**
                     * 设置<p>任务的启动命令，按任务训练模式输入，如遇特殊字符导致配置失败，可使用EncodedStartCmdInfo参数</p>
                     * @param _startCmdInfo <p>任务的启动命令，按任务训练模式输入，如遇特殊字符导致配置失败，可使用EncodedStartCmdInfo参数</p>
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
                     * 获取<p>训练模式，通过DescribeTrainingFrameworks接口查询，eg：PS_WORKER、DDP、MPI、HOROVOD</p>
                     * @return TrainingMode <p>训练模式，通过DescribeTrainingFrameworks接口查询，eg：PS_WORKER、DDP、MPI、HOROVOD</p>
                     * 
                     */
                    std::string GetTrainingMode() const;

                    /**
                     * 设置<p>训练模式，通过DescribeTrainingFrameworks接口查询，eg：PS_WORKER、DDP、MPI、HOROVOD</p>
                     * @param _trainingMode <p>训练模式，通过DescribeTrainingFrameworks接口查询，eg：PS_WORKER、DDP、MPI、HOROVOD</p>
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
                     * 获取<p>数据配置，依赖DataSource字段，数量不超过10个</p>
                     * @return DataConfigs <p>数据配置，依赖DataSource字段，数量不超过10个</p>
                     * 
                     */
                    std::vector<DataConfig> GetDataConfigs() const;

                    /**
                     * 设置<p>数据配置，依赖DataSource字段，数量不超过10个</p>
                     * @param _dataConfigs <p>数据配置，依赖DataSource字段，数量不超过10个</p>
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
                     * 获取<p>VPC Id</p>
                     * @return VpcId <p>VPC Id</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC Id</p>
                     * @param _vpcId <p>VPC Id</p>
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
                     * 获取<p>子网Id</p>
                     * @return SubnetId <p>子网Id</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>子网Id</p>
                     * @param _subnetId <p>子网Id</p>
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
                     * 获取<p>COS训练输出路径</p>
                     * @return Output <p>COS训练输出路径</p>
                     * 
                     */
                    CosPathInfo GetOutput() const;

                    /**
                     * 设置<p>COS训练输出路径</p>
                     * @param _output <p>COS训练输出路径</p>
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
                     * 获取<p>CLS日志配置</p>
                     * @return LogConfig <p>CLS日志配置</p>
                     * 
                     */
                    LogConfig GetLogConfig() const;

                    /**
                     * 设置<p>CLS日志配置</p>
                     * @param _logConfig <p>CLS日志配置</p>
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
                     * 获取<p>调优参数，不超过2048个字符</p>
                     * @return TuningParameters <p>调优参数，不超过2048个字符</p>
                     * 
                     */
                    std::string GetTuningParameters() const;

                    /**
                     * 设置<p>调优参数，不超过2048个字符</p>
                     * @param _tuningParameters <p>调优参数，不超过2048个字符</p>
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
                     * 获取<p>是否上报日志</p>
                     * @return LogEnable <p>是否上报日志</p>
                     * 
                     */
                    bool GetLogEnable() const;

                    /**
                     * 设置<p>是否上报日志</p>
                     * @param _logEnable <p>是否上报日志</p>
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
                     * 获取<p>备注，不超过1024个字符</p>
                     * @return Remark <p>备注，不超过1024个字符</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注，不超过1024个字符</p>
                     * @param _remark <p>备注，不超过1024个字符</p>
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
                     * 获取<p>数据来源，eg：DATASET、COS、CFS、CFSTurbo、HDFS、GooseFSx</p>
                     * @return DataSource <p>数据来源，eg：DATASET、COS、CFS、CFSTurbo、HDFS、GooseFSx</p>
                     * 
                     */
                    std::string GetDataSource() const;

                    /**
                     * 设置<p>数据来源，eg：DATASET、COS、CFS、CFSTurbo、HDFS、GooseFSx</p>
                     * @param _dataSource <p>数据来源，eg：DATASET、COS、CFS、CFSTurbo、HDFS、GooseFSx</p>
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
                     * 获取<p>回调地址，用于创建/启动/停止训练任务的异步回调。回调格式&amp;内容详见：<a href="https://cloud.tencent.com/document/product/851/84292">[TI-ONE接口回调说明]</a></p>
                     * @return CallbackUrl <p>回调地址，用于创建/启动/停止训练任务的异步回调。回调格式&amp;内容详见：<a href="https://cloud.tencent.com/document/product/851/84292">[TI-ONE接口回调说明]</a></p>
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置<p>回调地址，用于创建/启动/停止训练任务的异步回调。回调格式&amp;内容详见：<a href="https://cloud.tencent.com/document/product/851/84292">[TI-ONE接口回调说明]</a></p>
                     * @param _callbackUrl <p>回调地址，用于创建/启动/停止训练任务的异步回调。回调格式&amp;内容详见：<a href="https://cloud.tencent.com/document/product/851/84292">[TI-ONE接口回调说明]</a></p>
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
                     * 获取<p>编码后的任务启动命令，与StartCmdInfo同时配置时，仅当前参数生效</p>
                     * @return EncodedStartCmdInfo <p>编码后的任务启动命令，与StartCmdInfo同时配置时，仅当前参数生效</p>
                     * 
                     */
                    EncodedStartCmdInfo GetEncodedStartCmdInfo() const;

                    /**
                     * 设置<p>编码后的任务启动命令，与StartCmdInfo同时配置时，仅当前参数生效</p>
                     * @param _encodedStartCmdInfo <p>编码后的任务启动命令，与StartCmdInfo同时配置时，仅当前参数生效</p>
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
                     * 获取<p>代码仓库配置</p>
                     * @return CodeRepos <p>代码仓库配置</p>
                     * 
                     */
                    std::vector<CodeRepoConfig> GetCodeRepos() const;

                    /**
                     * 设置<p>代码仓库配置</p>
                     * @param _codeRepos <p>代码仓库配置</p>
                     * 
                     */
                    void SetCodeRepos(const std::vector<CodeRepoConfig>& _codeRepos);

                    /**
                     * 判断参数 CodeRepos 是否已赋值
                     * @return CodeRepos 是否已赋值
                     * 
                     */
                    bool CodeReposHasBeenSet() const;

                    /**
                     * 获取<p>网络暴露配置</p>
                     * @return ExposeNetworkConfig <p>网络暴露配置</p>
                     * 
                     */
                    ExposeNetworkConfig GetExposeNetworkConfig() const;

                    /**
                     * 设置<p>网络暴露配置</p>
                     * @param _exposeNetworkConfig <p>网络暴露配置</p>
                     * 
                     */
                    void SetExposeNetworkConfig(const ExposeNetworkConfig& _exposeNetworkConfig);

                    /**
                     * 判断参数 ExposeNetworkConfig 是否已赋值
                     * @return ExposeNetworkConfig 是否已赋值
                     * 
                     */
                    bool ExposeNetworkConfigHasBeenSet() const;

                    /**
                     * 获取<p>环境变量</p>
                     * @return Envs <p>环境变量</p>
                     * 
                     */
                    std::vector<EnvVar> GetEnvs() const;

                    /**
                     * 设置<p>环境变量</p>
                     * @param _envs <p>环境变量</p>
                     * 
                     */
                    void SetEnvs(const std::vector<EnvVar>& _envs);

                    /**
                     * 判断参数 Envs 是否已赋值
                     * @return Envs 是否已赋值
                     * 
                     */
                    bool EnvsHasBeenSet() const;

                private:

                    /**
                     * <p>训练任务名称，不超过60个字符，仅支持中英文、数字、下划线&quot;_&quot;、短横&quot;-&quot;，只能以中英文、数字开头</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>计费模式，eg：PREPAID 包年包月（资源组）;<br>POSTPAID_BY_HOUR 按量计费</p>
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * <p>资源配置，需填写对应算力规格ID和节点数量，算力规格ID查询接口为DescribeBillingSpecsPrice，eg：[{&quot;Role&quot;:&quot;WORKER&quot;, &quot;InstanceType&quot;: &quot;TI.S.MEDIUM.POST&quot;, &quot;InstanceNum&quot;: 1}]</p>
                     */
                    std::vector<ResourceConfigInfo> m_resourceConfigInfos;
                    bool m_resourceConfigInfosHasBeenSet;

                    /**
                     * <p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     */
                    std::string m_tiProjectId;
                    bool m_tiProjectIdHasBeenSet;

                    /**
                     * <p>训练框架名称，通过DescribeTrainingFrameworks接口查询，eg：SPARK、PYSPARK、TENSORFLOW、PYTORCH</p>
                     */
                    std::string m_frameworkName;
                    bool m_frameworkNameHasBeenSet;

                    /**
                     * <p>训练框架版本，通过DescribeTrainingFrameworks接口查询，eg：1.15、1.9</p>
                     */
                    std::string m_frameworkVersion;
                    bool m_frameworkVersionHasBeenSet;

                    /**
                     * <p>训练框架环境，通过DescribeTrainingFrameworks接口查询，eg：tf1.15-py3.7-cpu、torch1.9-py3.8-cuda11.1-gpu</p>
                     */
                    std::string m_frameworkEnvironment;
                    bool m_frameworkEnvironmentHasBeenSet;

                    /**
                     * <p>预付费专用资源组ID，通过DescribeBillingResourceGroups接口查询</p>
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * <p>标签配置</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>自定义镜像信息</p>
                     */
                    ImageInfo m_imageInfo;
                    bool m_imageInfoHasBeenSet;

                    /**
                     * <p>COS代码包路径</p>
                     */
                    CosPathInfo m_codePackagePath;
                    bool m_codePackagePathHasBeenSet;

                    /**
                     * <p>任务的启动命令，按任务训练模式输入，如遇特殊字符导致配置失败，可使用EncodedStartCmdInfo参数</p>
                     */
                    StartCmdInfo m_startCmdInfo;
                    bool m_startCmdInfoHasBeenSet;

                    /**
                     * <p>训练模式，通过DescribeTrainingFrameworks接口查询，eg：PS_WORKER、DDP、MPI、HOROVOD</p>
                     */
                    std::string m_trainingMode;
                    bool m_trainingModeHasBeenSet;

                    /**
                     * <p>数据配置，依赖DataSource字段，数量不超过10个</p>
                     */
                    std::vector<DataConfig> m_dataConfigs;
                    bool m_dataConfigsHasBeenSet;

                    /**
                     * <p>VPC Id</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>子网Id</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>COS训练输出路径</p>
                     */
                    CosPathInfo m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * <p>CLS日志配置</p>
                     */
                    LogConfig m_logConfig;
                    bool m_logConfigHasBeenSet;

                    /**
                     * <p>调优参数，不超过2048个字符</p>
                     */
                    std::string m_tuningParameters;
                    bool m_tuningParametersHasBeenSet;

                    /**
                     * <p>是否上报日志</p>
                     */
                    bool m_logEnable;
                    bool m_logEnableHasBeenSet;

                    /**
                     * <p>备注，不超过1024个字符</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>数据来源，eg：DATASET、COS、CFS、CFSTurbo、HDFS、GooseFSx</p>
                     */
                    std::string m_dataSource;
                    bool m_dataSourceHasBeenSet;

                    /**
                     * <p>回调地址，用于创建/启动/停止训练任务的异步回调。回调格式&amp;内容详见：<a href="https://cloud.tencent.com/document/product/851/84292">[TI-ONE接口回调说明]</a></p>
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * <p>编码后的任务启动命令，与StartCmdInfo同时配置时，仅当前参数生效</p>
                     */
                    EncodedStartCmdInfo m_encodedStartCmdInfo;
                    bool m_encodedStartCmdInfoHasBeenSet;

                    /**
                     * <p>代码仓库配置</p>
                     */
                    std::vector<CodeRepoConfig> m_codeRepos;
                    bool m_codeReposHasBeenSet;

                    /**
                     * <p>网络暴露配置</p>
                     */
                    ExposeNetworkConfig m_exposeNetworkConfig;
                    bool m_exposeNetworkConfigHasBeenSet;

                    /**
                     * <p>环境变量</p>
                     */
                    std::vector<EnvVar> m_envs;
                    bool m_envsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_CREATETRAININGTASKREQUEST_H_
