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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBERECORDLINECATEGORYLISTRESPONSE_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBERECORDLINECATEGORYLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dnspod/v20210323/model/LineItem.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * DescribeRecordLineCategoryList返回参数结构体
                */
                class DescribeRecordLineCategoryListResponse : public AbstractModel
                {
                public:
                    DescribeRecordLineCategoryListResponse();
                    ~DescribeRecordLineCategoryListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取按分类返回的线路列表。
                     * @return LineList 按分类返回的线路列表。
                     * 
                     */
                    std::vector<LineItem> GetLineList() const;

                    /**
                     * 判断参数 LineList 是否已赋值
                     * @return LineList 是否已赋值
                     * 
                     */
                    bool LineListHasBeenSet() const;

                private:

                    /**
                     * 按分类返回的线路列表。
                     */
                    std::vector<LineItem> m_lineList;
                    bool m_lineListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBERECORDLINECATEGORYLISTRESPONSE_H_
