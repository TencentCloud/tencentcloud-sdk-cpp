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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_SEARCHSUBTASKRESULTBYIDREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_SEARCHSUBTASKRESULTBYIDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * SearchSubtaskResultById请求参数结构体
                */
                class SearchSubtaskResultByIdRequest : public AbstractModel
                {
                public:
                    SearchSubtaskResultByIdRequest();
                    ~SearchSubtaskResultByIdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取运维任务名称
                     * @return Name 运维任务名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置运维任务名称
                     * @param _name 运维任务名称
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
                     * 获取查询偏移
                     * @return Offset 查询偏移
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置查询偏移
                     * @param _offset 查询偏移
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页的页内记录数，默认为20，最大200
                     * @return Limit 分页的页内记录数，默认为20，最大200
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页的页内记录数，默认为20，最大200
                     * @param _limit 分页的页内记录数，默认为20，最大200
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取运维父任务执行日志ID
                     * @return Id 运维父任务执行日志ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置运维父任务执行日志ID
                     * @param _id 运维父任务执行日志ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取运维父任务执行状态
                     * @return Status 运维父任务执行状态
                     * 
                     */
                    std::vector<uint64_t> GetStatus() const;

                    /**
                     * 设置运维父任务执行状态
                     * @param _status 运维父任务执行状态
                     * 
                     */
                    void SetStatus(const std::vector<uint64_t>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 运维任务名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 查询偏移
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页的页内记录数，默认为20，最大200
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 运维父任务执行日志ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 运维父任务执行状态
                     */
                    std::vector<uint64_t> m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_SEARCHSUBTASKRESULTBYIDREQUEST_H_
