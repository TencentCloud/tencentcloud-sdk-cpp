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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYSERVICEPROVIDERMODELATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYSERVICEPROVIDERMODELATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/UpstreamRolloutOperation.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * ModifyServiceProviderModelAttributes请求参数结构体
                */
                class ModifyServiceProviderModelAttributesRequest : public AbstractModel
                {
                public:
                    ModifyServiceProviderModelAttributesRequest();
                    ~ModifyServiceProviderModelAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>BYOK 实例 ID</p>
                     * @return ServiceProviderId <p>BYOK 实例 ID</p>
                     * 
                     */
                    std::string GetServiceProviderId() const;

                    /**
                     * 设置<p>BYOK 实例 ID</p>
                     * @param _serviceProviderId <p>BYOK 实例 ID</p>
                     * 
                     */
                    void SetServiceProviderId(const std::string& _serviceProviderId);

                    /**
                     * 判断参数 ServiceProviderId 是否已赋值
                     * @return ServiceProviderId 是否已赋值
                     * 
                     */
                    bool ServiceProviderIdHasBeenSet() const;

                    /**
                     * 获取<p>待修改的模型的名称（原始模型名称）</p>
                     * @return ModelName <p>待修改的模型的名称（原始模型名称）</p>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>待修改的模型的名称（原始模型名称）</p>
                     * @param _modelName <p>待修改的模型的名称（原始模型名称）</p>
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取<p>该模型支持的输入多模态能力列表</p><p>枚举值：</p><ul><li>text： 支持文本输入</li><li>image： 支持图像输入</li><li>file： 支持文件输入（当前仅支持pdf）</li><li>video： 支持视频输入</li></ul>
                     * @return InputModalities <p>该模型支持的输入多模态能力列表</p><p>枚举值：</p><ul><li>text： 支持文本输入</li><li>image： 支持图像输入</li><li>file： 支持文件输入（当前仅支持pdf）</li><li>video： 支持视频输入</li></ul>
                     * 
                     */
                    std::vector<std::string> GetInputModalities() const;

                    /**
                     * 设置<p>该模型支持的输入多模态能力列表</p><p>枚举值：</p><ul><li>text： 支持文本输入</li><li>image： 支持图像输入</li><li>file： 支持文件输入（当前仅支持pdf）</li><li>video： 支持视频输入</li></ul>
                     * @param _inputModalities <p>该模型支持的输入多模态能力列表</p><p>枚举值：</p><ul><li>text： 支持文本输入</li><li>image： 支持图像输入</li><li>file： 支持文件输入（当前仅支持pdf）</li><li>video： 支持视频输入</li></ul>
                     * 
                     */
                    void SetInputModalities(const std::vector<std::string>& _inputModalities);

                    /**
                     * 判断参数 InputModalities 是否已赋值
                     * @return InputModalities 是否已赋值
                     * 
                     */
                    bool InputModalitiesHasBeenSet() const;

                    /**
                     * 获取<p>新的上游模型名称</p>
                     * @return NewModelName <p>新的上游模型名称</p>
                     * 
                     */
                    std::string GetNewModelName() const;

                    /**
                     * 设置<p>新的上游模型名称</p>
                     * @param _newModelName <p>新的上游模型名称</p>
                     * 
                     */
                    void SetNewModelName(const std::string& _newModelName);

                    /**
                     * 判断参数 NewModelName 是否已赋值
                     * @return NewModelName 是否已赋值
                     * 
                     */
                    bool NewModelNameHasBeenSet() const;

                    /**
                     * 获取<p>新的对外模型名称</p>
                     * @return NewModelAlias <p>新的对外模型名称</p>
                     * 
                     */
                    std::string GetNewModelAlias() const;

                    /**
                     * 设置<p>新的对外模型名称</p>
                     * @param _newModelAlias <p>新的对外模型名称</p>
                     * 
                     */
                    void SetNewModelAlias(const std::string& _newModelAlias);

                    /**
                     * 判断参数 NewModelAlias 是否已赋值
                     * @return NewModelAlias 是否已赋值
                     * 
                     */
                    bool NewModelAliasHasBeenSet() const;

                    /**
                     * 获取<p>上游模型灰度操作，支持 Set、Promote、Rollback。</p><p>入参限制：未传时沿用普通属性编辑；显式 null、空对象及未知字段拒绝。与显式传入的 NewModelName、NewModelAlias、InputModalities 互斥，包括 null 和空别名。</p><p>Set 必须提供候选 ModelName 和 1～99 的整数 Weight，可调整同一候选的比例；相同配置在资源可编辑时成功且不重复下发。Promote、Rollback 仅传 Operation，分别全量切换到候选或恢复主模型并结束灰度。外层 ModelName 定位当前主模型；响应仍为 RequestId，任务通过 DescribeAsyncJobs 查询。</p>
                     * @return UpstreamRollout <p>上游模型灰度操作，支持 Set、Promote、Rollback。</p><p>入参限制：未传时沿用普通属性编辑；显式 null、空对象及未知字段拒绝。与显式传入的 NewModelName、NewModelAlias、InputModalities 互斥，包括 null 和空别名。</p><p>Set 必须提供候选 ModelName 和 1～99 的整数 Weight，可调整同一候选的比例；相同配置在资源可编辑时成功且不重复下发。Promote、Rollback 仅传 Operation，分别全量切换到候选或恢复主模型并结束灰度。外层 ModelName 定位当前主模型；响应仍为 RequestId，任务通过 DescribeAsyncJobs 查询。</p>
                     * 
                     */
                    UpstreamRolloutOperation GetUpstreamRollout() const;

                    /**
                     * 设置<p>上游模型灰度操作，支持 Set、Promote、Rollback。</p><p>入参限制：未传时沿用普通属性编辑；显式 null、空对象及未知字段拒绝。与显式传入的 NewModelName、NewModelAlias、InputModalities 互斥，包括 null 和空别名。</p><p>Set 必须提供候选 ModelName 和 1～99 的整数 Weight，可调整同一候选的比例；相同配置在资源可编辑时成功且不重复下发。Promote、Rollback 仅传 Operation，分别全量切换到候选或恢复主模型并结束灰度。外层 ModelName 定位当前主模型；响应仍为 RequestId，任务通过 DescribeAsyncJobs 查询。</p>
                     * @param _upstreamRollout <p>上游模型灰度操作，支持 Set、Promote、Rollback。</p><p>入参限制：未传时沿用普通属性编辑；显式 null、空对象及未知字段拒绝。与显式传入的 NewModelName、NewModelAlias、InputModalities 互斥，包括 null 和空别名。</p><p>Set 必须提供候选 ModelName 和 1～99 的整数 Weight，可调整同一候选的比例；相同配置在资源可编辑时成功且不重复下发。Promote、Rollback 仅传 Operation，分别全量切换到候选或恢复主模型并结束灰度。外层 ModelName 定位当前主模型；响应仍为 RequestId，任务通过 DescribeAsyncJobs 查询。</p>
                     * 
                     */
                    void SetUpstreamRollout(const UpstreamRolloutOperation& _upstreamRollout);

                    /**
                     * 判断参数 UpstreamRollout 是否已赋值
                     * @return UpstreamRollout 是否已赋值
                     * 
                     */
                    bool UpstreamRolloutHasBeenSet() const;

                private:

                    /**
                     * <p>BYOK 实例 ID</p>
                     */
                    std::string m_serviceProviderId;
                    bool m_serviceProviderIdHasBeenSet;

                    /**
                     * <p>待修改的模型的名称（原始模型名称）</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>该模型支持的输入多模态能力列表</p><p>枚举值：</p><ul><li>text： 支持文本输入</li><li>image： 支持图像输入</li><li>file： 支持文件输入（当前仅支持pdf）</li><li>video： 支持视频输入</li></ul>
                     */
                    std::vector<std::string> m_inputModalities;
                    bool m_inputModalitiesHasBeenSet;

                    /**
                     * <p>新的上游模型名称</p>
                     */
                    std::string m_newModelName;
                    bool m_newModelNameHasBeenSet;

                    /**
                     * <p>新的对外模型名称</p>
                     */
                    std::string m_newModelAlias;
                    bool m_newModelAliasHasBeenSet;

                    /**
                     * <p>上游模型灰度操作，支持 Set、Promote、Rollback。</p><p>入参限制：未传时沿用普通属性编辑；显式 null、空对象及未知字段拒绝。与显式传入的 NewModelName、NewModelAlias、InputModalities 互斥，包括 null 和空别名。</p><p>Set 必须提供候选 ModelName 和 1～99 的整数 Weight，可调整同一候选的比例；相同配置在资源可编辑时成功且不重复下发。Promote、Rollback 仅传 Operation，分别全量切换到候选或恢复主模型并结束灰度。外层 ModelName 定位当前主模型；响应仍为 RequestId，任务通过 DescribeAsyncJobs 查询。</p>
                     */
                    UpstreamRolloutOperation m_upstreamRollout;
                    bool m_upstreamRolloutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYSERVICEPROVIDERMODELATTRIBUTESREQUEST_H_
