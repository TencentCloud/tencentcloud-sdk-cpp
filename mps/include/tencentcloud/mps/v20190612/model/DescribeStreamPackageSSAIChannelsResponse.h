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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESTREAMPACKAGESSAICHANNELSRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESTREAMPACKAGESSAICHANNELSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SSAIChannelInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeStreamPackageSSAIChannels返回参数结构体
                */
                class DescribeStreamPackageSSAIChannelsResponse : public AbstractModel
                {
                public:
                    DescribeStreamPackageSSAIChannelsResponse();
                    ~DescribeStreamPackageSSAIChannelsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取广告插入配置信息。
                     * @return Infos 广告插入配置信息。
                     * 
                     */
                    std::vector<SSAIChannelInfo> GetInfos() const;

                    /**
                     * 判断参数 Infos 是否已赋值
                     * @return Infos 是否已赋值
                     * 
                     */
                    bool InfosHasBeenSet() const;

                    /**
                     * 获取页码。
                     * @return PageNum 页码。
                     * 
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取每页大小。
                     * @return PageSize 每页大小。
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取总条目数。
                     * @return TotalNum 总条目数。
                     * 
                     */
                    uint64_t GetTotalNum() const;

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     * 
                     */
                    bool TotalNumHasBeenSet() const;

                private:

                    /**
                     * 广告插入配置信息。
                     */
                    std::vector<SSAIChannelInfo> m_infos;
                    bool m_infosHasBeenSet;

                    /**
                     * 页码。
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * 每页大小。
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 总条目数。
                     */
                    uint64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESTREAMPACKAGESSAICHANNELSRESPONSE_H_
