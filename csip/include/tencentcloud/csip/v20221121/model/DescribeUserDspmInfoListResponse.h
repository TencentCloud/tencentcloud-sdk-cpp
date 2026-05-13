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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEUSERDSPMINFOLISTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEUSERDSPMINFOLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/UserDspmInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeUserDspmInfoList返回参数结构体
                */
                class DescribeUserDspmInfoListResponse : public AbstractModel
                {
                public:
                    DescribeUserDspmInfoListResponse();
                    ~DescribeUserDspmInfoListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取账号dspm信息列表
                     * @return List 账号dspm信息列表
                     * 
                     */
                    std::vector<UserDspmInfo> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取已勾选数据库资产总数
                     * @return SelectedAssetNum 已勾选数据库资产总数
                     * 
                     */
                    int64_t GetSelectedAssetNum() const;

                    /**
                     * 判断参数 SelectedAssetNum 是否已赋值
                     * @return SelectedAssetNum 是否已赋值
                     * 
                     */
                    bool SelectedAssetNumHasBeenSet() const;

                    /**
                     * 获取账号总数
                     * @return Count 账号总数
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * 账号dspm信息列表
                     */
                    std::vector<UserDspmInfo> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * 已勾选数据库资产总数
                     */
                    int64_t m_selectedAssetNum;
                    bool m_selectedAssetNumHasBeenSet;

                    /**
                     * 账号总数
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEUSERDSPMINFOLISTRESPONSE_H_
