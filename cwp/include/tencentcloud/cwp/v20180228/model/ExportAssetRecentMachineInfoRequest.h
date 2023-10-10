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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETRECENTMACHINEINFOREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETRECENTMACHINEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ExportAssetRecentMachineInfo请求参数结构体
                */
                class ExportAssetRecentMachineInfoRequest : public AbstractModel
                {
                public:
                    ExportAssetRecentMachineInfoRequest();
                    ~ExportAssetRecentMachineInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开始时间。
                     * @return BeginDate 开始时间。
                     * 
                     */
                    std::string GetBeginDate() const;

                    /**
                     * 设置开始时间。
                     * @param _beginDate 开始时间。
                     * 
                     */
                    void SetBeginDate(const std::string& _beginDate);

                    /**
                     * 判断参数 BeginDate 是否已赋值
                     * @return BeginDate 是否已赋值
                     * 
                     */
                    bool BeginDateHasBeenSet() const;

                    /**
                     * 获取结束时间。
                     * @return EndDate 结束时间。
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置结束时间。
                     * @param _endDate 结束时间。
                     * 
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                private:

                    /**
                     * 开始时间。
                     */
                    std::string m_beginDate;
                    bool m_beginDateHasBeenSet;

                    /**
                     * 结束时间。
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETRECENTMACHINEINFOREQUEST_H_
