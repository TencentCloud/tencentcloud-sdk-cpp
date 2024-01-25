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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_ASYNCRESOURCEVO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_ASYNCRESOURCEVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/ParamInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 操作资源DTO
                */
                class AsyncResourceVO : public AbstractModel
                {
                public:
                    AsyncResourceVO();
                    ~AsyncResourceVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取处理Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessId 处理Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetProcessId() const;

                    /**
                     * 设置处理Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processId 处理Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcessId(const uint64_t& _processId);

                    /**
                     * 判断参数 ProcessId 是否已赋值
                     * @return ProcessId 是否已赋值
                     * 
                     */
                    bool ProcessIdHasBeenSet() const;

                    /**
                     * 获取资源Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceId 资源Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceId 资源Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceName 资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceName 资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取自定义信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtraInfo 自定义信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ParamInfo> GetExtraInfo() const;

                    /**
                     * 设置自定义信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extraInfo 自定义信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtraInfo(const std::vector<ParamInfo>& _extraInfo);

                    /**
                     * 判断参数 ExtraInfo 是否已赋值
                     * @return ExtraInfo 是否已赋值
                     * 
                     */
                    bool ExtraInfoHasBeenSet() const;

                private:

                    /**
                     * 处理Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_processId;
                    bool m_processIdHasBeenSet;

                    /**
                     * 资源Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 自定义信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ParamInfo> m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_ASYNCRESOURCEVO_H_
