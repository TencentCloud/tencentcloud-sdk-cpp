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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_BINDDSPARESOURCECOSBUCKETSREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_BINDDSPARESOURCECOSBUCKETSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/CosResourceItem.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * BindDSPAResourceCosBuckets请求参数结构体
                */
                class BindDSPAResourceCosBucketsRequest : public AbstractModel
                {
                public:
                    BindDSPAResourceCosBucketsRequest();
                    ~BindDSPAResourceCosBucketsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DSPA实例ID。
                     * @return DspaId DSPA实例ID。
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置DSPA实例ID。
                     * @param _dspaId DSPA实例ID。
                     * 
                     */
                    void SetDspaId(const std::string& _dspaId);

                    /**
                     * 判断参数 DspaId 是否已赋值
                     * @return DspaId 是否已赋值
                     * 
                     */
                    bool DspaIdHasBeenSet() const;

                    /**
                     * 获取绑定的COS桶信息。
                     * @return BindCosResourceItems 绑定的COS桶信息。
                     * 
                     */
                    std::vector<CosResourceItem> GetBindCosResourceItems() const;

                    /**
                     * 设置绑定的COS桶信息。
                     * @param _bindCosResourceItems 绑定的COS桶信息。
                     * 
                     */
                    void SetBindCosResourceItems(const std::vector<CosResourceItem>& _bindCosResourceItems);

                    /**
                     * 判断参数 BindCosResourceItems 是否已赋值
                     * @return BindCosResourceItems 是否已赋值
                     * 
                     */
                    bool BindCosResourceItemsHasBeenSet() const;

                    /**
                     * 获取解绑的COS桶信息。
                     * @return UnbindCosResourceItems 解绑的COS桶信息。
                     * 
                     */
                    std::vector<CosResourceItem> GetUnbindCosResourceItems() const;

                    /**
                     * 设置解绑的COS桶信息。
                     * @param _unbindCosResourceItems 解绑的COS桶信息。
                     * 
                     */
                    void SetUnbindCosResourceItems(const std::vector<CosResourceItem>& _unbindCosResourceItems);

                    /**
                     * 判断参数 UnbindCosResourceItems 是否已赋值
                     * @return UnbindCosResourceItems 是否已赋值
                     * 
                     */
                    bool UnbindCosResourceItemsHasBeenSet() const;

                private:

                    /**
                     * DSPA实例ID。
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 绑定的COS桶信息。
                     */
                    std::vector<CosResourceItem> m_bindCosResourceItems;
                    bool m_bindCosResourceItemsHasBeenSet;

                    /**
                     * 解绑的COS桶信息。
                     */
                    std::vector<CosResourceItem> m_unbindCosResourceItems;
                    bool m_unbindCosResourceItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_BINDDSPARESOURCECOSBUCKETSREQUEST_H_
