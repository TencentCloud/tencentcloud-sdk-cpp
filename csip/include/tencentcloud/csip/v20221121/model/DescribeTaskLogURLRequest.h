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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBETASKLOGURLREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBETASKLOGURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ReportItemKey.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeTaskLogURL请求参数结构体
                */
                class DescribeTaskLogURLRequest : public AbstractModel
                {
                public:
                    DescribeTaskLogURLRequest();
                    ~DescribeTaskLogURLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务报告Id 列表
                     * @return ReportItemKeyList 任务报告Id 列表
                     * 
                     */
                    std::vector<ReportItemKey> GetReportItemKeyList() const;

                    /**
                     * 设置任务报告Id 列表
                     * @param _reportItemKeyList 任务报告Id 列表
                     * 
                     */
                    void SetReportItemKeyList(const std::vector<ReportItemKey>& _reportItemKeyList);

                    /**
                     * 判断参数 ReportItemKeyList 是否已赋值
                     * @return ReportItemKeyList 是否已赋值
                     * 
                     */
                    bool ReportItemKeyListHasBeenSet() const;

                    /**
                     * 获取0: 预览， 1: 下载
                     * @return Type 0: 预览， 1: 下载
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置0: 预览， 1: 下载
                     * @param _type 0: 预览， 1: 下载
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 任务报告Id 列表
                     */
                    std::vector<ReportItemKey> m_reportItemKeyList;
                    bool m_reportItemKeyListHasBeenSet;

                    /**
                     * 0: 预览， 1: 下载
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBETASKLOGURLREQUEST_H_
