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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBELANESREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBELANESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribeLanes请求参数结构体
                */
                class DescribeLanesRequest : public AbstractModel
                {
                public:
                    DescribeLanesRequest();
                    ~DescribeLanesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取返回数量，默认为20，最大值为100。
                     * @return Limit 返回数量，默认为20，最大值为100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。
                     * @param _limit 返回数量，默认为20，最大值为100。
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
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取搜索关键字。
                     * @return SearchWord 搜索关键字。
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置搜索关键字。
                     * @param _searchWord 搜索关键字。
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取泳道配置ID。该参数可以通过调用 [DescribeLanes](https://cloud.tencent.com/document/product/649/44504) 的返回值中的 LaneId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=grayscale&subTab=lane)查看；也可以调用[CreateLane](https://cloud.tencent.com/document/product/649/44508)创建新的泳道配置。
                     * @return LaneIdList 泳道配置ID。该参数可以通过调用 [DescribeLanes](https://cloud.tencent.com/document/product/649/44504) 的返回值中的 LaneId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=grayscale&subTab=lane)查看；也可以调用[CreateLane](https://cloud.tencent.com/document/product/649/44508)创建新的泳道配置。
                     * 
                     */
                    std::vector<std::string> GetLaneIdList() const;

                    /**
                     * 设置泳道配置ID。该参数可以通过调用 [DescribeLanes](https://cloud.tencent.com/document/product/649/44504) 的返回值中的 LaneId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=grayscale&subTab=lane)查看；也可以调用[CreateLane](https://cloud.tencent.com/document/product/649/44508)创建新的泳道配置。
                     * @param _laneIdList 泳道配置ID。该参数可以通过调用 [DescribeLanes](https://cloud.tencent.com/document/product/649/44504) 的返回值中的 LaneId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=grayscale&subTab=lane)查看；也可以调用[CreateLane](https://cloud.tencent.com/document/product/649/44508)创建新的泳道配置。
                     * 
                     */
                    void SetLaneIdList(const std::vector<std::string>& _laneIdList);

                    /**
                     * 判断参数 LaneIdList 是否已赋值
                     * @return LaneIdList 是否已赋值
                     * 
                     */
                    bool LaneIdListHasBeenSet() const;

                    /**
                     * 获取忽略传参，业务预留字段。
                     * @return DisableProgramAuthCheck 忽略传参，业务预留字段。
                     * 
                     */
                    bool GetDisableProgramAuthCheck() const;

                    /**
                     * 设置忽略传参，业务预留字段。
                     * @param _disableProgramAuthCheck 忽略传参，业务预留字段。
                     * 
                     */
                    void SetDisableProgramAuthCheck(const bool& _disableProgramAuthCheck);

                    /**
                     * 判断参数 DisableProgramAuthCheck 是否已赋值
                     * @return DisableProgramAuthCheck 是否已赋值
                     * 
                     */
                    bool DisableProgramAuthCheckHasBeenSet() const;

                private:

                    /**
                     * 返回数量，默认为20，最大值为100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 搜索关键字。
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 泳道配置ID。该参数可以通过调用 [DescribeLanes](https://cloud.tencent.com/document/product/649/44504) 的返回值中的 LaneId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=grayscale&subTab=lane)查看；也可以调用[CreateLane](https://cloud.tencent.com/document/product/649/44508)创建新的泳道配置。
                     */
                    std::vector<std::string> m_laneIdList;
                    bool m_laneIdListHasBeenSet;

                    /**
                     * 忽略传参，业务预留字段。
                     */
                    bool m_disableProgramAuthCheck;
                    bool m_disableProgramAuthCheckHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBELANESREQUEST_H_
