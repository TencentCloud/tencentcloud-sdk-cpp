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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_DESCRIBEBPFAKEURLSRESPONSE_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_DESCRIBEBPFAKEURLSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bma/v20210624/model/FakeURLInfo.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20210624
        {
            namespace Model
            {
                /**
                * DescribeBPFakeURLs返回参数结构体
                */
                class DescribeBPFakeURLsResponse : public AbstractModel
                {
                public:
                    DescribeBPFakeURLsResponse();
                    ~DescribeBPFakeURLsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取仿冒网址列表
                     * @return FakeURLInfos 仿冒网址列表
                     * 
                     */
                    std::vector<FakeURLInfo> GetFakeURLInfos() const;

                    /**
                     * 判断参数 FakeURLInfos 是否已赋值
                     * @return FakeURLInfos 是否已赋值
                     * 
                     */
                    bool FakeURLInfosHasBeenSet() const;

                    /**
                     * 获取总量
                     * @return TotalCount 总量
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取导出量
                     * @return ExportURL 导出量
                     * 
                     */
                    std::string GetExportURL() const;

                    /**
                     * 判断参数 ExportURL 是否已赋值
                     * @return ExportURL 是否已赋值
                     * 
                     */
                    bool ExportURLHasBeenSet() const;

                private:

                    /**
                     * 仿冒网址列表
                     */
                    std::vector<FakeURLInfo> m_fakeURLInfos;
                    bool m_fakeURLInfosHasBeenSet;

                    /**
                     * 总量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 导出量
                     */
                    std::string m_exportURL;
                    bool m_exportURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_DESCRIBEBPFAKEURLSRESPONSE_H_
