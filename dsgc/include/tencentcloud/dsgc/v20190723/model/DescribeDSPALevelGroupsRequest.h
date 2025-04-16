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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPALEVELGROUPSREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPALEVELGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DescribeDSPALevelGroups请求参数结构体
                */
                class DescribeDSPALevelGroupsRequest : public AbstractModel
                {
                public:
                    DescribeDSPALevelGroupsRequest();
                    ~DescribeDSPALevelGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DSPA实例ID
                     * @return DspaId DSPA实例ID
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置DSPA实例ID
                     * @param _dspaId DSPA实例ID
                     * 
                     */
                    void SetDspaId(const std::string& _dspaId);

                    /**
                     * 判断参数 DspaId 是否已赋值
                     * @return DspaId 是否已赋值
                     * 
                     */
                    bool DspaIdHasBeenSet() const;

                    /**
                     * 获取分级组名称
                     * @return Name 分级组名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置分级组名称
                     * @param _name 分级组名称
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
                     * 获取每页返回的记录数
                     * @return Limit 每页返回的记录数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页返回的记录数
                     * @param _limit 每页返回的记录数
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取从第几条记录开始返回
                     * @return Offset 从第几条记录开始返回
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置从第几条记录开始返回
                     * @param _offset 从第几条记录开始返回
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * DSPA实例ID
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 分级组名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 每页返回的记录数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 从第几条记录开始返回
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPALEVELGROUPSREQUEST_H_
