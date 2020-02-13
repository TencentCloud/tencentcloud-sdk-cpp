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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBETASKSBYTYPEREQUEST_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBETASKSBYTYPEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * DescribeTasksByType请求参数结构体
                */
                class DescribeTasksByTypeRequest : public AbstractModel
                {
                public:
                    DescribeTasksByTypeRequest();
                    ~DescribeTasksByTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取从第Offset 条开始查询。缺省值为0
                     * @return Offset 从第Offset 条开始查询。缺省值为0
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置从第Offset 条开始查询。缺省值为0
                     * @param Offset 从第Offset 条开始查询。缺省值为0
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取本批次查询Limit 条记录。缺省值为20
                     * @return Limit 本批次查询Limit 条记录。缺省值为20
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置本批次查询Limit 条记录。缺省值为20
                     * @param Limit 本批次查询Limit 条记录。缺省值为20
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取拨测任务类型。0 站点监控，2 可用性监控。缺省值为2
                     * @return Type 拨测任务类型。0 站点监控，2 可用性监控。缺省值为2
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置拨测任务类型。0 站点监控，2 可用性监控。缺省值为2
                     * @param Type 拨测任务类型。0 站点监控，2 可用性监控。缺省值为2
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 从第Offset 条开始查询。缺省值为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 本批次查询Limit 条记录。缺省值为20
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 拨测任务类型。0 站点监控，2 可用性监控。缺省值为2
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBETASKSBYTYPEREQUEST_H_
