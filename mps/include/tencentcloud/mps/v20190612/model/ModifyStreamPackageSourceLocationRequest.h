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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSTREAMPACKAGESOURCELOCATIONREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSTREAMPACKAGESOURCELOCATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SegmentDeliverInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * ModifyStreamPackageSourceLocation请求参数结构体
                */
                class ModifyStreamPackageSourceLocationRequest : public AbstractModel
                {
                public:
                    ModifyStreamPackageSourceLocationRequest();
                    ~ModifyStreamPackageSourceLocationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取SourceLocation Id。
                     * @return Id SourceLocation Id。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置SourceLocation Id。
                     * @param _id SourceLocation Id。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取修改后的名称。
                     * @return Name 修改后的名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置修改后的名称。
                     * @param _name 修改后的名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取基准URL。	
                     * @return BaseUrl 基准URL。	
                     * 
                     */
                    std::string GetBaseUrl() const;

                    /**
                     * 设置基准URL。	
                     * @param _baseUrl 基准URL。	
                     * 
                     */
                    void SetBaseUrl(const std::string& _baseUrl);

                    /**
                     * 判断参数 BaseUrl 是否已赋值
                     * @return BaseUrl 是否已赋值
                     * 
                     */
                    bool BaseUrlHasBeenSet() const;

                    /**
                     * 获取是否开启补片。
                     * @return SegmentDeliverEnable 是否开启补片。
                     * 
                     */
                    bool GetSegmentDeliverEnable() const;

                    /**
                     * 设置是否开启补片。
                     * @param _segmentDeliverEnable 是否开启补片。
                     * 
                     */
                    void SetSegmentDeliverEnable(const bool& _segmentDeliverEnable);

                    /**
                     * 判断参数 SegmentDeliverEnable 是否已赋值
                     * @return SegmentDeliverEnable 是否已赋值
                     * 
                     */
                    bool SegmentDeliverEnableHasBeenSet() const;

                    /**
                     * 获取补片配置。	
                     * @return SegmentDeliverConf 补片配置。	
                     * 
                     */
                    SegmentDeliverInfo GetSegmentDeliverConf() const;

                    /**
                     * 设置补片配置。	
                     * @param _segmentDeliverConf 补片配置。	
                     * 
                     */
                    void SetSegmentDeliverConf(const SegmentDeliverInfo& _segmentDeliverConf);

                    /**
                     * 判断参数 SegmentDeliverConf 是否已赋值
                     * @return SegmentDeliverConf 是否已赋值
                     * 
                     */
                    bool SegmentDeliverConfHasBeenSet() const;

                    /**
                     * 获取是否开启package分发分片，默认开启。	
                     * @return SegmentDeliverUsePackageEnable 是否开启package分发分片，默认开启。	
                     * 
                     */
                    bool GetSegmentDeliverUsePackageEnable() const;

                    /**
                     * 设置是否开启package分发分片，默认开启。	
                     * @param _segmentDeliverUsePackageEnable 是否开启package分发分片，默认开启。	
                     * 
                     */
                    void SetSegmentDeliverUsePackageEnable(const bool& _segmentDeliverUsePackageEnable);

                    /**
                     * 判断参数 SegmentDeliverUsePackageEnable 是否已赋值
                     * @return SegmentDeliverUsePackageEnable 是否已赋值
                     * 
                     */
                    bool SegmentDeliverUsePackageEnableHasBeenSet() const;

                private:

                    /**
                     * SourceLocation Id。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 修改后的名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 基准URL。	
                     */
                    std::string m_baseUrl;
                    bool m_baseUrlHasBeenSet;

                    /**
                     * 是否开启补片。
                     */
                    bool m_segmentDeliverEnable;
                    bool m_segmentDeliverEnableHasBeenSet;

                    /**
                     * 补片配置。	
                     */
                    SegmentDeliverInfo m_segmentDeliverConf;
                    bool m_segmentDeliverConfHasBeenSet;

                    /**
                     * 是否开启package分发分片，默认开启。	
                     */
                    bool m_segmentDeliverUsePackageEnable;
                    bool m_segmentDeliverUsePackageEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSTREAMPACKAGESOURCELOCATIONREQUEST_H_
