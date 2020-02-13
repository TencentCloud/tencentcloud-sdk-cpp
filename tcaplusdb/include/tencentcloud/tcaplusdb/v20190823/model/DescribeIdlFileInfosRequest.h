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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBEIDLFILEINFOSREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBEIDLFILEINFOSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * DescribeIdlFileInfos请求参数结构体
                */
                class DescribeIdlFileInfosRequest : public AbstractModel
                {
                public:
                    DescribeIdlFileInfosRequest();
                    ~DescribeIdlFileInfosRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件所属应用实例ID
                     * @return ApplicationId 文件所属应用实例ID
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置文件所属应用实例ID
                     * @param ApplicationId 文件所属应用实例ID
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取文件所属大区ID
                     * @return LogicZoneIds 文件所属大区ID
                     */
                    std::vector<std::string> GetLogicZoneIds() const;

                    /**
                     * 设置文件所属大区ID
                     * @param LogicZoneIds 文件所属大区ID
                     */
                    void SetLogicZoneIds(const std::vector<std::string>& _logicZoneIds);

                    /**
                     * 判断参数 LogicZoneIds 是否已赋值
                     * @return LogicZoneIds 是否已赋值
                     */
                    bool LogicZoneIdsHasBeenSet() const;

                    /**
                     * 获取指定文件ID
                     * @return IdlFileIds 指定文件ID
                     */
                    std::vector<std::string> GetIdlFileIds() const;

                    /**
                     * 设置指定文件ID
                     * @param IdlFileIds 指定文件ID
                     */
                    void SetIdlFileIds(const std::vector<std::string>& _idlFileIds);

                    /**
                     * 判断参数 IdlFileIds 是否已赋值
                     * @return IdlFileIds 是否已赋值
                     */
                    bool IdlFileIdsHasBeenSet() const;

                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param Offset 偏移量
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取文件列表大小
                     * @return Limit 文件列表大小
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置文件列表大小
                     * @param Limit 文件列表大小
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 文件所属应用实例ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 文件所属大区ID
                     */
                    std::vector<std::string> m_logicZoneIds;
                    bool m_logicZoneIdsHasBeenSet;

                    /**
                     * 指定文件ID
                     */
                    std::vector<std::string> m_idlFileIds;
                    bool m_idlFileIdsHasBeenSet;

                    /**
                     * 偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 文件列表大小
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBEIDLFILEINFOSREQUEST_H_
