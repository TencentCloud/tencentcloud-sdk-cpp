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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_RUNAPPLICATIONREQUEST_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_RUNAPPLICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/omics/v20221128/model/RunOption.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * RunApplication请求参数结构体
                */
                class RunApplicationRequest : public AbstractModel
                {
                public:
                    RunApplicationRequest();
                    ~RunApplicationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID。
                     * @return ApplicationId 应用ID。
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用ID。
                     * @param ApplicationId 应用ID。
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取项目ID。
                     * @return ProjectId 项目ID。
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID。
                     * @param ProjectId 项目ID。
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取任务批次名称。
                     * @return Name 任务批次名称。
                     */
                    std::string GetName() const;

                    /**
                     * 设置任务批次名称。
                     * @param Name 任务批次名称。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取投递环境ID。
                     * @return EnvironmentId 投递环境ID。
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置投递环境ID。
                     * @param EnvironmentId 投递环境ID。
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取任务输入JSON。需要进行base64编码。
                     * @return InputBase64 任务输入JSON。需要进行base64编码。
                     */
                    std::string GetInputBase64() const;

                    /**
                     * 设置任务输入JSON。需要进行base64编码。
                     * @param InputBase64 任务输入JSON。需要进行base64编码。
                     */
                    void SetInputBase64(const std::string& _inputBase64);

                    /**
                     * 判断参数 InputBase64 是否已赋值
                     * @return InputBase64 是否已赋值
                     */
                    bool InputBase64HasBeenSet() const;

                    /**
                     * 获取任务缓存清理时间。不填表示不清理。
                     * @return CacheClearDelay 任务缓存清理时间。不填表示不清理。
                     */
                    uint64_t GetCacheClearDelay() const;

                    /**
                     * 设置任务缓存清理时间。不填表示不清理。
                     * @param CacheClearDelay 任务缓存清理时间。不填表示不清理。
                     */
                    void SetCacheClearDelay(const uint64_t& _cacheClearDelay);

                    /**
                     * 判断参数 CacheClearDelay 是否已赋值
                     * @return CacheClearDelay 是否已赋值
                     */
                    bool CacheClearDelayHasBeenSet() const;

                    /**
                     * 获取运行选项。
                     * @return Option 运行选项。
                     */
                    RunOption GetOption() const;

                    /**
                     * 设置运行选项。
                     * @param Option 运行选项。
                     */
                    void SetOption(const RunOption& _option);

                    /**
                     * 判断参数 Option 是否已赋值
                     * @return Option 是否已赋值
                     */
                    bool OptionHasBeenSet() const;

                    /**
                     * 获取任务批次描述。
                     * @return Description 任务批次描述。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置任务批次描述。
                     * @param Description 任务批次描述。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取批量投递表格ID，不填表示单例投递。
                     * @return TableId 批量投递表格ID，不填表示单例投递。
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置批量投递表格ID，不填表示单例投递。
                     * @param TableId 批量投递表格ID，不填表示单例投递。
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取批量投递表格行UUID。不填表示表格全部行。
                     * @return TableRowUuids 批量投递表格行UUID。不填表示表格全部行。
                     */
                    std::vector<std::string> GetTableRowUuids() const;

                    /**
                     * 设置批量投递表格行UUID。不填表示表格全部行。
                     * @param TableRowUuids 批量投递表格行UUID。不填表示表格全部行。
                     */
                    void SetTableRowUuids(const std::vector<std::string>& _tableRowUuids);

                    /**
                     * 判断参数 TableRowUuids 是否已赋值
                     * @return TableRowUuids 是否已赋值
                     */
                    bool TableRowUuidsHasBeenSet() const;

                private:

                    /**
                     * 应用ID。
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 项目ID。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务批次名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 投递环境ID。
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 任务输入JSON。需要进行base64编码。
                     */
                    std::string m_inputBase64;
                    bool m_inputBase64HasBeenSet;

                    /**
                     * 任务缓存清理时间。不填表示不清理。
                     */
                    uint64_t m_cacheClearDelay;
                    bool m_cacheClearDelayHasBeenSet;

                    /**
                     * 运行选项。
                     */
                    RunOption m_option;
                    bool m_optionHasBeenSet;

                    /**
                     * 任务批次描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 批量投递表格ID，不填表示单例投递。
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * 批量投递表格行UUID。不填表示表格全部行。
                     */
                    std::vector<std::string> m_tableRowUuids;
                    bool m_tableRowUuidsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_RUNAPPLICATIONREQUEST_H_
