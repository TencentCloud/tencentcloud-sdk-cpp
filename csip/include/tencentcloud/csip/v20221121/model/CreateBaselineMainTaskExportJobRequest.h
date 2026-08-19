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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEBASELINEMAINTASKEXPORTJOBREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEBASELINEMAINTASKEXPORTJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filters.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateBaselineMainTaskExportJob请求参数结构体
                */
                class CreateBaselineMainTaskExportJobRequest : public AbstractModel
                {
                public:
                    CreateBaselineMainTaskExportJobRequest();
                    ~CreateBaselineMainTaskExportJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>基线主任务 ID，精确导出该任务的检测项与子任务；不传时导出为空。</p>
                     * @return TaskID <p>基线主任务 ID，精确导出该任务的检测项与子任务；不传时导出为空。</p>
                     * 
                     */
                    uint64_t GetTaskID() const;

                    /**
                     * 设置<p>基线主任务 ID，精确导出该任务的检测项与子任务；不传时导出为空。</p>
                     * @param _taskID <p>基线主任务 ID，精确导出该任务的检测项与子任务；不传时导出为空。</p>
                     * 
                     */
                    void SetTaskID(const uint64_t& _taskID);

                    /**
                     * 判断参数 TaskID 是否已赋值
                     * @return TaskID 是否已赋值
                     * 
                     */
                    bool TaskIDHasBeenSet() const;

                    /**
                     * 获取<p>导出任务名称。不传时自动生成。</p>
                     * @return Name <p>导出任务名称。不传时自动生成。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>导出任务名称。不传时自动生成。</p>
                     * @param _name <p>导出任务名称。不传时自动生成。</p>
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
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>通用过滤条件，支持的字段包括：TaskID（精确）、TaskType、Status、CheckAssetType 等。</p>
                     * @return Filters <p>通用过滤条件，支持的字段包括：TaskID（精确）、TaskType、Status、CheckAssetType 等。</p>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<p>通用过滤条件，支持的字段包括：TaskID（精确）、TaskType、Status、CheckAssetType 等。</p>
                     * @param _filters <p>通用过滤条件，支持的字段包括：TaskID（精确）、TaskType、Status、CheckAssetType 等。</p>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>基线主任务 ID，精确导出该任务的检测项与子任务；不传时导出为空。</p>
                     */
                    uint64_t m_taskID;
                    bool m_taskIDHasBeenSet;

                    /**
                     * <p>导出任务名称。不传时自动生成。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>通用过滤条件，支持的字段包括：TaskID（精确）、TaskType、Status、CheckAssetType 等。</p>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEBASELINEMAINTASKEXPORTJOBREQUEST_H_
