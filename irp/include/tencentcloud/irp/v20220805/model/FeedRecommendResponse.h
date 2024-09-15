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

#ifndef TENCENTCLOUD_IRP_V20220805_MODEL_FEEDRECOMMENDRESPONSE_H_
#define TENCENTCLOUD_IRP_V20220805_MODEL_FEEDRECOMMENDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/irp/v20220805/model/RecItemData.h>


namespace TencentCloud
{
    namespace Irp
    {
        namespace V20220805
        {
            namespace Model
            {
                /**
                * FeedRecommend返回参数结构体
                */
                class FeedRecommendResponse : public AbstractModel
                {
                public:
                    FeedRecommendResponse();
                    ~FeedRecommendResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取推荐返回的内容信息列表，返回结果已按策略规则做好了排序
                     * @return DataList 推荐返回的内容信息列表，返回结果已按策略规则做好了排序
                     * 
                     */
                    std::vector<RecItemData> GetDataList() const;

                    /**
                     * 判断参数 DataList 是否已赋值
                     * @return DataList 是否已赋值
                     * 
                     */
                    bool DataListHasBeenSet() const;

                private:

                    /**
                     * 推荐返回的内容信息列表，返回结果已按策略规则做好了排序
                     */
                    std::vector<RecItemData> m_dataList;
                    bool m_dataListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IRP_V20220805_MODEL_FEEDRECOMMENDRESPONSE_H_
