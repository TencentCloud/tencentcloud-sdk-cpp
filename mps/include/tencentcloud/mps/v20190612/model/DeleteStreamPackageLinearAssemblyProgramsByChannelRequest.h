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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DELETESTREAMPACKAGELINEARASSEMBLYPROGRAMSBYCHANNELREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DELETESTREAMPACKAGELINEARASSEMBLYPROGRAMSBYCHANNELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DeleteStreamPackageLinearAssemblyProgramsByChannel请求参数结构体
                */
                class DeleteStreamPackageLinearAssemblyProgramsByChannelRequest : public AbstractModel
                {
                public:
                    DeleteStreamPackageLinearAssemblyProgramsByChannelRequest();
                    ~DeleteStreamPackageLinearAssemblyProgramsByChannelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>频道的ID</p>
                     * @return ChannelID <p>频道的ID</p>
                     * 
                     */
                    std::string GetChannelID() const;

                    /**
                     * 设置<p>频道的ID</p>
                     * @param _channelID <p>频道的ID</p>
                     * 
                     */
                    void SetChannelID(const std::string& _channelID);

                    /**
                     * 判断参数 ChannelID 是否已赋值
                     * @return ChannelID 是否已赋值
                     * 
                     */
                    bool ChannelIDHasBeenSet() const;

                    /**
                     * 获取<p>需要删除的Id数组</p>
                     * @return IDs <p>需要删除的Id数组</p>
                     * 
                     */
                    std::vector<std::string> GetIDs() const;

                    /**
                     * 设置<p>需要删除的Id数组</p>
                     * @param _iDs <p>需要删除的Id数组</p>
                     * 
                     */
                    void SetIDs(const std::vector<std::string>& _iDs);

                    /**
                     * 判断参数 IDs 是否已赋值
                     * @return IDs 是否已赋值
                     * 
                     */
                    bool IDsHasBeenSet() const;

                private:

                    /**
                     * <p>频道的ID</p>
                     */
                    std::string m_channelID;
                    bool m_channelIDHasBeenSet;

                    /**
                     * <p>需要删除的Id数组</p>
                     */
                    std::vector<std::string> m_iDs;
                    bool m_iDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DELETESTREAMPACKAGELINEARASSEMBLYPROGRAMSBYCHANNELREQUEST_H_
